/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/11 12:24:42 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/11 12:39:49 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "[Brain 🧠] Default constructor: A new mind sparks into consciousness!" << std::endl;
}

Brain::Brain(const Brain& copy) {
	std::cout << "[Brain 🧠] Copy constructor: Duplicating thoughts... hopefully none are too weird." << std::endl;
	*this = copy;
}

Brain::~Brain() {
	std::cout << "[Brain 💤] Destructor: The mind drifts away into dreams and data dust..." << std::endl;
}

Brain&	operator=(const Brain &copy) {
	if (this != &copy)
		this->_ideas = copy._ideas;
	return *this;
}

std::string*	getIdeas() {
	return _ideas;
}
