#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <cctype>
#include <cstdlib>
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
	
		void	convertFromChar(const std::string& input);
		void	convertFromInt(const std::string& input);
		void	convertFromFloat(const std::string& input);
		void	convertFromDouble(const std::string& input);

};

#endif