/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/11 12:24:42 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/16 18:22:56 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Brain.hpp"

Brain::Brain() {
	std::cout << "[Brain 🧠] Default constructor: A new mind sparks into consciousness!" << std::endl;
}

Brain::Brain(const Brain& copy) {
	std::cout << "[Brain 🧠] Copy constructor: Duplicating thoughts... hopefully none are too weird." << std::endl;
	*this = copy;
}

Brain::~Brain() {
	std::cout << "[Brain 🧠] Destructor: The mind drifts away into dreams and data dust..." << std::endl;
}

Brain&	Brain::operator=(const Brain &copy) {
	std::cout << "[Brain 🧠] Copy assignment operator: Going deep. Just another way of duplicating thoughts... now every thought should be copied." << std::endl;
	if (this != &copy)
		std::copy(std::begin(copy._ideas), std::end(copy._ideas), std::begin(this->_ideas));
	return *this;
}

const std::string*	Brain::getIdeas() const{
	return _ideas;
}

void	Brain::setIdea(int i, const std::string idea){
	this->_ideas[i] = idea;
}
