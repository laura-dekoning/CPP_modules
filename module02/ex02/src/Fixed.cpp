/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/09/01 14:27:52 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/09/15 17:02:51 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cmath>
#include "../incl/Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0){
	std::cout << "Default constructor called" << std::endl;
}

/* Is called when a new object is created from an existing one. */
Fixed::Fixed(const Fixed& other) : _fixedPointValue(other._fixedPointValue) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int constIntVar) : _fixedPointValue(constIntVar * (1 << _fractionalBits)){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float constFloatVar) : _fixedPointValue(roundf(constFloatVar * (1 << _fractionalBits))){
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

/* Is called when an already existing object is assigned a VALUE of another existing object. Defines how objects behave when assignment operator (=) is used. Check for not trying to copy itself. Creating deep copy of other. */
Fixed&	Fixed::operator=(const Fixed& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_fixedPointValue = other._fixedPointValue;
	return *this;
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

int		Fixed::toInt(void) const{
	return _fixedPointValue >> _fractionalBits;
}

float	Fixed::toFloat(void) const{
	return _fixedPointValue / 256.0f;
}

// Comparison Operators: > < >= <= == !=
bool	Fixed::operator>(const Fixed& other) const{
	return this->_fixedPointValue > other._fixedPointValue;
}

bool	Fixed::operator<(const Fixed& other) const{
	return this->_fixedPointValue < other._fixedPointValue;
}

bool	Fixed::operator>=(const Fixed& other) const{
	return this->_fixedPointValue >= other._fixedPointValue;
}

bool	Fixed::operator<=(const Fixed& other) const{
	return this->_fixedPointValue <= other._fixedPointValue;
}

bool	Fixed::operator==(const Fixed& other) const{
	return this->_fixedPointValue == other._fixedPointValue;
}

bool	Fixed::operator!=(const Fixed& other) const{
	return this->_fixedPointValue != other._fixedPointValue;
}


// Arithmetic Operators: + - * /
Fixed	Fixed::operator+(const Fixed& other) const{
	return (this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(const Fixed& other) const{
	return (this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(const Fixed& other) const{
	return (this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(const Fixed& other) const{
	return (this->toFloat() / other.toFloat());
}

// Increment/Decrement Operators: ++ -- (pre and post)
Fixed&	Fixed::operator++(void){
	_fixedPointValue++;

	return (*this);
}

Fixed	Fixed::operator++(int intVal){
	Fixed	result(*this);
	(void)	intVal;

	_fixedPointValue++;

	return result;
}

Fixed&	Fixed::operator--(void){
	_fixedPointValue--;

	return (*this);
}

Fixed	Fixed::operator--(int intVal){
	Fixed	result(*this);
	(void)	intVal;

	_fixedPointValue--;

	return result;
}


// Min/Max Methods
static Fixed&		min(Fixed& _fpVal1, Fixed& _fpVal2){
	if (_fpVal1 < _fpVal2)
		return _fpVal1;
	else
		return _fpVal2;
}

static const Fixed&	min(const Fixed& _fpVal1, const Fixed& _fpVal2){
	if (_fpVal1 < _fpVal2)
		return _fpVal1;
	else
		return _fpVal2;
}

static Fixed&		max(Fixed& _fpVal1, Fixed& _fpVal2){
	if (_fpVal1 > _fpVal2)
		return _fpVal1;
	else
		return _fpVal2;
}

static const Fixed&	manx(const Fixed& _fpVal1, const Fixed& _fpVal2){
	if (_fpVal1 > _fpVal2)
		return _fpVal1;
	else
		return _fpVal2;
}

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed){
	out << fixed.toFloat();	// Will send float into stream
	return out;				// Returns the stream so calls can be chained
}
