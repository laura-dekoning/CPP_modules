/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 14:17:08 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/20 18:17:57 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const& type) : _type(type){
	std::cout << "✨ AMateria of type '" << _type << "' created!" << std::endl;
}

AMateria::~AMateria(){
	std::cout << "💨 AMateria of type '" << _type << "' destroyed!" << std::endl;
}

std::string const& getType() const{
	return _type;
}

void use(ICharacter& target){
	std::cout << "* uses mysterious materia on " << target.getName() << " *" << std::endl;
}





