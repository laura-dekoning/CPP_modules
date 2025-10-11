/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 16:58:23 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/11 11:38:27 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "[WrongAnimal 🧬] Default constructor: A mysterious creature appears!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) : _type(copy._type) {
	std::cout << "[WrongAnimal 🧬] Copy constructor: Cloning the creature... hope it’s stable this time." << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "[WrongAnimal 💀] Destructor: The creature fades into legend..." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &copy){
	if (this != &copy)
		this->_type = copy._type;
	return *this;
}

std::string	WrongAnimal::getType() const{
	return _type;
}

void	WrongAnimal::makeSound() const{
	std::cout << "Anamalistic sound!" << std::endl;
}
