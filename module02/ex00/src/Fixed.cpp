/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/09/01 14:27:52 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/09/15 11:21:52 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0){
	std::cout << "Default constructor called" << std::endl;
}

/* Is called when a new object is created from an existing one. */
Fixed::Fixed(const Fixed& other) : _fixedPointValue(other._fixedPointValue) {
	std::cout << "Copy constructor called" << std::endl;
}

/* Is called when an already existing object is assigned a VALUE of another existing object. Defines how objects behave when assignment operator (=) is used. Check for not trying to copy itself. Creating deep copy of other. */
Fixed&	Fixed::operator=(Fixed& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_fixedPointValue = other._fixedPointValue;
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

/* Getters & Setters */

int		Fixed::getRawBits(void)const{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixedPointValue;
}

void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	_fixedPointValue = raw;
}
