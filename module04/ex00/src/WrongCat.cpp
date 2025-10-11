/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 16:57:24 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/11 12:01:50 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat() {
	WrongAnimal::_type = "Cat";
	std::cout << "[Cat 🐱] Default constructor: A cat casually walks in, ignores you." << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) {
	*this = copy;
	std::cout << "[Cat 🐱] Copy constructor: Another cat? Great. Double the attitude." << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "[Cat 😼] Destructor: The cat vanishes... probably to knock something else off a shelf." << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat &copy){
	if (this != &copy)
		WrongAnimal::operator=(copy);
	return *this;
}

void	WrongCat::makeSound() const{
	std::cout << "Miauw miauw!" << std::endl;
}