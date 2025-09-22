/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsp.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/09/20 10:40:02 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/09/22 14:17:23 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/**
 * Formula to get area of a triangle:
 * Area = (1/2) |x1​(y2​−y3​)+x2​(y3​−y1​)+x3​(y1​−y2​)|
​*/
static float	area(Point const& a, Point const& b, Point const& c){
	float	area;
	float	a1 = (a.getX() * (b.getY() - c.getY()));
	float	a2 = (b.getX() * (c.getY() - a.getY()));
	float	a3 = (c.getX() * (a.getY() - b.getY()));

	area = a1 + a2 + a3;
	area /= 2;
	if (area < 0)
		area *= -1;
	return area;
}

/**
 * @param a/b/c: vertices of triangle
 * @param point: point to check if inside triangle
 * return true if point is inside triangle, else return false
 * 
 * If parameters were passed as const references, no copies are made.
 */
bool	bsp(Point const a, Point const b, Point const c, Point const point){
	float	totalAreaABC = area(a, b, c);
	float	areaPBC = area(point, b, c);
	float	areaAPC = area(a, point, c);
	float	areaABP = area(a, b, point);

	if (areaPBC == 0 || areaAPC == 0 || areaABP == 0)
		return false;
	if (totalAreaABC == areaPBC + areaAPC + areaABP)
		return true;
	else
		return false;
}
