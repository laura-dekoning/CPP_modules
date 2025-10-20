/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 16:58:23 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/20 14:03:55 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"

AAnimal::AAnimal() {
	std::cout << "[AAnimal 🧬] Default constructor: A mysterious creature appears!" << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy) : _type(copy._type) {
	std::cout << "[AAnimal 🧬] Copy constructor: Cloning the creature... hope it’s stable this time." << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "[AAnimal 💀] Destructor: The creature fades into legend..." << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal &copy) {
	if (this != &copy)
		this->_type = copy._type;
	return *this;
}

std::string	AAnimal::getType() const {
	return _type;
}

void	AAnimal::makeSound() const {
	std::cout << "Anamalistic sound!" << std::endl;
}
