#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &other){
	(void)other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other){
	(void)other;
	return (*this);
}

ScalarConverter::~ScalarConverter(){}

void ScalarConverter::convert(const std::string input){
	if (qualifiesAsChar(input))
		convertFromChar(input);
	else if (qualifiesAsInt(input))
		convertFromInt(input);
	else if (qualifiesAsFloat(input))
		convertFromFloat(input);
	else if (qualifiesAsDouble(input))
		convertFromDouble(input);
	else
		std::cerr << "Options for <literal>:\n- char\n- int\n- float\n- double" << std::endl;
}

bool	ScalarConverter::qualifiesAsChar(const std::string& input){
	return(input.length() == 3 && input[0] == '\'' && input[2] == '\'');
}

bool	ScalarConverter::qualifiesAsInt(const std::string& input){
	try
	{
		std::size_t	pos;
		std::stoi(input, &pos);

		return (pos == input.length());
	}
	catch (...)
	{
		return (false);
	}
}

bool	ScalarConverter::qualifiesAsFloat(const std::string& input){
	if (input == "nanf" || input == "+inff" || input == "-inff")
		return (true);

	if (input[input.length() - 1] != 'f')
		return (false);

	char*	end;

	std::strtof(input.c_str(), &end);

	return (*end == 'f' && *(end + 1) == '\0');
}

bool	ScalarConverter::qualifiesAsDouble(const std::string& input){
	if (input == "nan" || input == "+inf" || input == "-inf")
		return (true);
	if (input.find('.') == std::string::npos)
		return (false);

	char*	end;

	std::strtod(input.c_str(), &end);
	return (*end == '\0');
}


void	ScalarConverter::convertFromChar(const std::string& input){
	char value;

	if (input.length() == 1)
		value = input[0];
	else
		value = input[1];

	printFromChar(value);
}

void	ScalarConverter::convertFromInt(const std::string& input){
	int value = std::atoi(input.c_str());

	printFromInt(value);
}

void	ScalarConverter::convertFromFloat(const std::string& input){
	float value = std::stof(input.c_str());

	printFromFloat(value);
}

void	ScalarConverter::convertFromDouble(const std::string& input){
	double value = std::stod(input.c_str());

	printFromDouble(value);
}

void	ScalarConverter::printFromChar(char value){
	if (std::isprint(static_cast<unsigned char>(value)))
		std::cout << "char:\t\'" << value << "\'\n";
	else
		std::cout << "char:\tNon displayable" << "\n";

	std::cout << "int:\t" << static_cast<int>(value) << "\n";
	std::cout << "float:\t" << static_cast<float>(value) << "f\n";
	std::cout << "double:\t" << static_cast<double>(value) << "\n";
}

void	ScalarConverter::printFromInt(int value){
	if (value < 0 || value > 127)
		std::cout << "char:\timpossible\n";
	else if (!std::isprint(static_cast<unsigned char>(value)))
		std::cout << "char:\tNon displayable" << "\n";
	else
		std::cout << "char:\t\'" << static_cast<char>(value) << "\'\n";

	std::cout << "int:\t" << value << "\n";
	std::cout << "float:\t" << static_cast<float>(value) << "f\n";
	std::cout << "double:\t" << static_cast<double>(value) << "\n";
}

void	ScalarConverter::printFromFloat(float value){
	if (value < 0 || value > 127 || std::isnan(value))
		std::cout << "char:\timpossible\n";
	else if (!std::isprint(static_cast<unsigned char>(value)))
		std::cout << "char:\tNon displayable" << "\n";
	else
		std::cout << "char:\t\'" << static_cast<char>(value) << "\'\n";

	if (value < std::numeric_limits<int>::lowest()
	||	value > static_cast<float>(std::numeric_limits<int>::max())
	||	std::isnan(value))
		std::cout << "int:\timpossible\n";
	else
		std::cout << "int:\t" << static_cast<int>(value) << "\n";

	std::cout << "float:\t" << value << "f\n";
	std::cout << "double:\t" << static_cast<double>(value) << "\n";
}

void	ScalarConverter::printFromDouble(double value){
	if (value < 0 || value > 127 || std::isnan(value))
		std::cout << "char:\timpossible\n";
	else if (!std::isprint(static_cast<unsigned char>(value)))
		std::cout << "char:\tNon displayable" << "\n";
	else
		std::cout << "char:\t\'" << static_cast<char>(value) << "\'\n";

	if (value < std::numeric_limits<int>::lowest()
	||	value > std::numeric_limits<int>::max()
	||	std::isnan(value))
		std::cout << "int:\timpossible\n";
	else
		std::cout << "int:\t" << static_cast<int>(value) << "\n";

	if (value < std::numeric_limits<float>::lowest() || value > std::numeric_limits<float>::max())
		std::cout << "float:\timpossible\n";
	else
		std::cout << "float:\t" << static_cast<float>(value) << "f\n";

	std::cout << "double:\t" << value << "\n";
}
