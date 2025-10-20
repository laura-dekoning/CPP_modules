/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 18:05:53 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/20 18:18:13 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure() {
	std::cout << "💊 Cure materia created — healing vibes ready!" << std::endl;
}

Cure::~Cure() {
	std::cout << "💫 Cure materia fades away into light." << std::endl;
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}