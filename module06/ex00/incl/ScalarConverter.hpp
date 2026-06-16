#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <cctype>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <cmath>

class ScalarConverter
{
	public:
		static void convert(const std::string input);

	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter& operator=(const ScalarConverter &other);
		~ScalarConverter();
		
		static bool	qualifiesAsChar(const std::string& input);
		static bool	qualifiesAsInt(const std::string& input);
		static bool	qualifiesAsFloat(const std::string& input);
		static bool	qualifiesAsDouble(const std::string& input);
	
		static void	convertFromChar(const std::string& input);
		static void	convertFromInt(const std::string& input);
		static void	convertFromFloat(const std::string& input);
		static void	convertFromDouble(const std::string& input);

		static void	printFromChar(char value);
		static void	printFromInt(int value);
		static void	printFromFloat(float value);
		static void	printFromDouble(double value);
};

#endif