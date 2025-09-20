/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/09/01 14:24:52 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/09/19 16:50:16 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../incl/Fixed.hpp"

int main(void){
	Fixed		a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max(a, b) << std::endl;
	
	// OWN TESTING //
	
	std::cout << "-------------------\nAND NOW MY OWN TEST\n-------------------" << std::endl;

	Fixed const c(20.04f);
	Fixed		d(10);

	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << Fixed::max(c, b) << std::endl;
	std::cout << Fixed::min(c, b) << std::endl;

	return 0;
}