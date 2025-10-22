/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 18:05:53 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/22 10:37:11 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure"){
	std::cout << "💊 Cure materia created — healing vibes ready!" << std::endl;
}

Cure::~Cure() {
	std::cout << "💫 Cure materia fades away into light." << std::endl;
}

AMateria* Ice::clone() const{
	return new Cure(*this);
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}