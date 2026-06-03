#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <cctype>
#include <iostream>

class ScalarConverter
{
	public:
		static void convert(const std::string input);

	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter& operator=(const ScalarConverter &other);
		~ScalarConverter();
		
		bool	qualifiesAsChar(const std::string& input);
		bool	qualifiesAsInt(const std::string& input);
		bool	qualifiesAsFloat(const std::string& input);
		bool	qualifiesAsDouble(const std::string& input);
	
		const std::string&	convertFromChar(const std::string& input);
		const std::string&	convertFromInt(const std::string& input);
		const std::string&	convertFromFloat(const std::string& input);
		const std::string&	convertFromDouble(const std::string& input);

};

#endif