/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/09/01 14:24:52 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/10 12:00:37 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void){
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

/* Own tests */
	std::cout << "\nHere is some testing of my own.\n" << std::endl;
	a.setRawBits(12);
	b.setRawBits(10);
	c.setRawBits(120240360);

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	a = c;

	std::cout << a.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}