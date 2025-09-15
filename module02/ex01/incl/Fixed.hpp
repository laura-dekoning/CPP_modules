/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/09/01 14:26:13 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/09/15 14:00:03 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <string>
# include <iostream>

class Fixed {
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
	public:
		Fixed();								// Default constructor
		Fixed(const int constIntVar);			// Constructor with const int as par
		Fixed(const float constFloatVar);		// Constructor with const float as par
		Fixed(const Fixed& other);				// Copy constructor
		Fixed&	operator=(const Fixed& other);	// Copy assignment constructor
		~Fixed();								// Destructor

		int		getRawBits(void)const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);

#endif