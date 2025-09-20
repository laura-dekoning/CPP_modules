/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/09/01 14:26:13 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/09/19 15:55:39 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <string>
# include <iostream>
# include <cmath>

class Fixed {
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
	public:
		Fixed();								// Default constructor
		Fixed(const int constIntVar);			// Constructor with const int as par
		Fixed(const float constFloatVar);		// Constructor with const float as par
		Fixed(const Fixed& other);				// Copy constructor
		~Fixed();								// Destructor
		
		Fixed&	operator=(const Fixed& other);	// Copy assignment constructor

				int		getRawBits(void)const;
				void	setRawBits(int const raw);
				int		toInt(void) const;
				float	toFloat(void) const;

		// Comparison Operators: > < >= <= == !=
		bool	operator>(const Fixed& other) const;
		bool	operator<(const Fixed& other) const;
		bool	operator>=(const Fixed& other) const;
		bool	operator<=(const Fixed& other) const;
		bool	operator==(const Fixed& other) const;
		bool	operator!=(const Fixed& other) const;

		// Arithmetic Operators: + - * /
		Fixed	operator+(const Fixed& other) const;
		Fixed	operator-(const Fixed& other) const;
		Fixed	operator*(const Fixed& other) const;
		Fixed	operator/(const Fixed& other) const;

		// Increment/Decrement Operators: ++ -- (pre and post)
		Fixed&	operator++(void);
		Fixed	operator++(int intVal);
		Fixed&	operator--(void);
		Fixed	operator--(int intVal);

		// Min/Max Methods
		static Fixed&		min(Fixed& _fpVal1, Fixed& _fpVal2);
		static const Fixed&	min(const Fixed& _fpVal1, const Fixed& _fpVal2);
		static Fixed&		max(Fixed& _fpVal1, Fixed& _fpVal2);
		static const Fixed&	max(const Fixed& _fpVal1, const Fixed& _fpVal2);
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);

#endif