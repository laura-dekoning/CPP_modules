/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/09/20 10:39:39 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/09/22 14:17:49 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Point.hpp"

Point::Point() : _x(0), _y(0){}

Point::Point(const float f1, const float f2) : _x(f1), _y(f2){}

Point::Point(const Point& other) : _x(other._x), _y(other._y){}

Point::~Point(){}

/* Since x and y are const, we cannot reassign them. */
Point&	Point::operator=(const Point& value){
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

