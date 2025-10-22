/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 14:17:08 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/22 12:10:01 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const& type) : _type(type){
	std::cout << "✨ AMateria of type '" << _type << "' created!" << std::endl;
}

AMateria::AMateria(const AMateria &copy) : _type(copy._type){
	std::cout << "📄 AMateria copied! Type: '" << _type << "'" << std::endl;
}

AMateria::~AMateria(){
	std::cout << "💥 AMateria of type '" << _type << "' destroyed!" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &copy){
	if (this != &copy) {
		_type = copy._type;
		std::cout << "📝 AMateria assigned! New type: '" << _type << "'" << std::endl;
	}
	return *this;
}

std::string const& AMateria::getType() const{
	return _type;
}

void AMateria::use(ICharacter& target){
	void(target);
	std::cout << "* uses mysterious materia on " << target.getName() << " *" << std::endl;
}
