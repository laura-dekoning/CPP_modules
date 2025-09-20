/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/09/20 10:39:39 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/09/20 12:11:03 by lade-kon      ########   odam.nl         */
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

/* Since x and y are const, we cannot reassign them. */
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

static float	area(Point const& a, Point const& b, Point const& c){

}

bool	bsp(Point const a, Point const b, Point const c, Point const point){
	float	totalAreaABC = area(a, b, c);
	float	areaPBC = area(point, b, c);
	float	areaAPC = area(a, point, c);
	float	areaABP = area(a, b, point);

	totalAreaABC = areaPBC + areaAPC + areaABP;
	if (totalAreaABC == 0)
		return false;
}
