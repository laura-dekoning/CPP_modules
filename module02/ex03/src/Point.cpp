/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/09/20 10:39:39 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/09/20 11:25:09 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Point.hpp"

Point::Point() : _x(0), _y(0){
	std::cout << "Default constructor called. _x = 0 and _y = 0" << std::endl;
}

Point::Point(const float f1, const float f2) : _x(f1), _y(f2){
	std::cout << "Constructor called." << std::endl;
}

Point::Point(const Point& other) : _x(other._x), _y(other._y){
	std::cout << "Copy constructor called." << std::endl;
}

Point::~Point(){
	std::cout << "Destructor called." << std::endl;
}

Point&	Point::operator=(const Point& value){
	std::cout << "Copy assignment operator called" << std::endl;
	(void) value;
	return *this;
}

/* GETTERS */
float	Point::getX() const{
	return this->_x.toFloat();
}

float	Point::getY() const{
	return this->_y.toFloat();
}

/* SETTERS */
void	Point::setX(int const value){
	std::cout << "setX to " << value << std::endl;
	_x = value;
}

void	Point::setY(int const value){
	std::cout << "setY to " << value << std::endl;
	_y = value;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point){

}
