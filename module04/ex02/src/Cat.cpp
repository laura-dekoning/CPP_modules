/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 16:57:24 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/20 13:45:04 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Cat.hpp"

Cat::Cat() {
	AAnimal::_type = "Cat";
	_brain = new Brain();
	std::cout << "[Cat 🐱] Default constructor: A cat casually walks in, ignores you." << std::endl;
}

Cat::Cat(const Cat& copy) : AAnimal(copy), _brain(new Brain(*copy._brain)){
	std::cout << "[Cat 🐱] Copy constructor: Another cat? Great. Double the attitude." << std::endl;
}

Cat::~Cat() {
	delete _brain;
	std::cout << "[Cat 😼] Destructor: The cat vanishes... probably to knock something else off a shelf." << std::endl;
}

Cat&	Cat::operator=(const Cat &copy) {
	if (this != &copy){
		AAnimal::operator=(copy);
		delete _brain;
		_brain = new Brain(*copy._brain);
	}
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "Miauw miauw!" << std::endl;
}

Brain*	Cat::getBrain() const {
	return _brain;
}
