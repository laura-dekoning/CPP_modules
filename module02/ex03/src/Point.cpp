/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/09/20 10:39:39 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/09/20 11:02:09 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Point.hpp"

Point::Point() : _x(0), _y(0){
	std::cout << "Default constructor called. _x = 0 and _y = 0" << std::endl;
}

Point::Point(const float f1, const float f2) : _x(f1), _y(f2){
	std::cout << "Constructor called." << std::endl;
}

Point::Point(const Point& other){

}

Point::~Point(){

}

Point&	Point::operator=(const Point& other){

}
