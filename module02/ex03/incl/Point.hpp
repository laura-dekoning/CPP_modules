/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/09/20 10:38:51 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/09/20 10:57:33 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

# include <string>
# include <iostream>
# include <cmath>
# include "Fixed.hpp"

class Point {
	private:
		Fixed const	_x;
		Fixed const	_y;
	public:
		Point();								// Default constructor
		Point(const float f1, const float f2);	// Constructor
		Point(const Point& other);				// Copy constructor
		~Point();								// Destructor
		
		Point&	operator=(const Point& other);	// Copy assignment constructor
};

/*	a,b,c: Vertices of triangle.
	point: Point to check.
	return: True if the point is inside the triangle. False otherwise.
			Thus, if the point is a vertex or on an edge, it will return False. */
bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif