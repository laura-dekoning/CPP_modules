#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &other){}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other){
	return (*this);
}

ScalarConverter::~ScalarConverter(){}

void ScalarConverter::convert(const std::string input){
	
}

bool	ScalarConverter::qualifiesAsChar(const std::string& input){
	if (input.length() == 1 && !std::isdigit(input[0]))
		return (true);
	else if (input.length() == 3 && input[0] == '\'' && input[2] == '\'')
		return (true);

	return (false);
}

bool	ScalarConverter::qualifiesAsInt(const std::string& input){
	
}

bool	ScalarConverter::qualifiesAsFloat(const std::string& input){
	
}

bool	ScalarConverter::qualifiesAsDouble(const std::string& input){
	
}


const std::string&	ScalarConverter::convertFromChar(const std::string& input){
	
}

const std::string&	ScalarConverter::convertFromInt(const std::string& input){
	
}

const std::string&	ScalarConverter::convertFromFloat(const std::string& input){
	
}

const std::string&	ScalarConverter::convertFromDouble(const std::string& input){
	
}





ScalarConverter& operator<<(const ScalarConverter &s){

}