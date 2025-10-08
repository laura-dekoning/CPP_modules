/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 16:58:23 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/08 19:10:46 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"

Animal::Animal() {
	std::cout << "[Animal 🧬] Default constructor: A mysterious creature appears!" << std::endl;
}

Animal::Animal(const Animal& copy) : _type(copy._type) {
	std::cout << "[Animal 🧬] Copy constructor: Cloning the creature... hope it’s stable this time." << std::endl;
}

Animal::~Animal() {
	std::cout << "[Animal 💀] Destructor: The creature fades into legend..." << std::endl;
}

Animal&	Animal::operator=(const Animal &copy){
	if (this != &copy)
		this->_type = copy._type;
	return *this;
}

std::string	Animal::getType() const{
	return _type;
}

void	Animal::makeSound() const{
	std::cout << "Making sound!" << std::endl;
}
