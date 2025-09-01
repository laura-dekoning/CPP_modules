/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/09/01 14:27:52 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/09/01 17:26:41 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& value){
	std::cout << "Copy constructor called" << std::endl;


}

Fixed&	Fixed::operator=(Fixed& value){
	std::cout << "Copy assignment operator called" << std::endl;


}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void)const{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointValue);
}

void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	_fixedPointValue = raw;
}
