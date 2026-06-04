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
	if (input.length() == 1)
		return (!std::isdigit(static_cast<unsigned char>(input[0])));
	else if (input.length() == 3 && input[0] == '\'' && input[2] == '\'')
		return (true);

	return (false);
}

bool	ScalarConverter::qualifiesAsInt(const std::string& input){
	try
	{
		std::size_t	pos;
		std::stoi(input, &pos);

		return (pos == input.length());
	}
	catch (...)
		return (false);
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
	
}

void	ScalarConverter::convertFromInt(const std::string& input){
	
}

void	ScalarConverter::convertFromFloat(const std::string& input){
	
}

void	ScalarConverter::convertFromDouble(const std::string& input){
	
}





ScalarConverter& operator<<(const ScalarConverter &s){

}