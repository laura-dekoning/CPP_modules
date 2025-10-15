/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 17:01:51 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/15 14:13:24 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Dog.hpp"

Dog::Dog() {
	Animal::_type = "Dog";
	_brain = new Brain;
	std::cout << "[Dog 🐶] Default constructor: A happy doggo appears, tail wagging furiously!" << std::endl;
}

Dog::Dog(const Dog& copy) {
	*this = copy;
	std::cout << "[Dog 🐶] Copy constructor: Copying dog—wait, both are good boys!" << std::endl;
}

Dog::~Dog() {
	delete _brain;
	std::cout << "[Dog 💤] Destructor: The good boy takes a well-deserved nap." << std::endl;
}

Dog&	Dog::operator=(const Dog &copy) {
	if (this != &copy)
		Animal::operator=(copy);
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "Woef woef!" << std::endl;
}
