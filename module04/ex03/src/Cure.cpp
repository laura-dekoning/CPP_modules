/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 18:05:53 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/24 10:39:22 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure"){
	std::cout << "💊 Cure materia created — healing vibes ready!" << std::endl;
}

Cure::Cure(const Cure& copy) : AMateria(copy) {
	std::cout << "💫 Cure materia copied." << std::endl;
}

Cure::~Cure() {
	std::cout << "🌪  Cure materia disappeared!" << std::endl;
}

Cure& Cure::operator=(const Cure& copy) {
	if (this != &copy) {
		AMateria::operator=(copy);
		std::cout << "📝 Cure materia swapped in!" << std::endl;
	}
	return *this;
}

AMateria* Cure::clone() const{
	return new Cure(*this);
}

void Cure::use(ICharacter& target){
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
}