/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/09/01 14:24:52 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/09/22 14:32:56 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../incl/Fixed.hpp"
#include "../incl/Point.hpp"

int main(void){
	// Define a triangle
	Point A(0.0f, 0.0f);
	Point B(4.0f, 0.0f);
	Point C(2.0f, 3.0f);

	// Test points
	Point inside(2.0f, 1.0f);	// clearly inside
	Point edge(2.0f, 0.0f);		// on edge AB
	Point vertex(0.0f, 0.0f);	// exactly at A
	Point outside(5.0f, 1.0f);	// clearly outside

	// Run bsp tests
	std::cout << "Inside (2,1):   " << (bsp(A, B, C, inside) ? "true" : "false") << std::endl;
	std::cout << "On edge (2,0):  " << (bsp(A, B, C, edge)   ? "true" : "false") << std::endl;
	std::cout << "At vertex (0,0):" << (bsp(A, B, C, vertex) ? "true" : "false") << std::endl;
	std::cout << "Outside (5,1):  " << (bsp(A, B, C, outside)? "true" : "false") << std::endl;

	// Define a triangle
	Point D(0.0f, 1.0f);
	Point E(4.0f, 0.0f);
	Point F(2.0f, 3.0f);

	// Run bsp tests
	std::cout << "Inside (2,1):   " << (bsp(D, E, F, inside) ? "true" : "false") << std::endl;
	std::cout << "On edge (2,0):  " << (bsp(D, E, F, edge)   ? "true" : "false") << std::endl;
	std::cout << "At vertex (0,0):" << (bsp(D, E, F, vertex) ? "true" : "false") << std::endl;
	std::cout << "Outside (5,1):  " << (bsp(D, E, F, outside)? "true" : "false") << std::endl;

	return 0;
}