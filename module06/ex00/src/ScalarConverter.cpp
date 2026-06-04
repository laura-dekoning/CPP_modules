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
		return (!std::isdigit(input[0]));
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
	else if (input.endswith("f") && input.contains("."))
}

bool	ScalarConverter::qualifiesAsDouble(const std::string& input){
	
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