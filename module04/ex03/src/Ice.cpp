/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 18:02:43 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/22 12:21:04 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice"){
	std::cout << "❄️ Ice materia forged — cold and sharp!" << std::endl;
}

Ice::Ice(const Ice& copy) : AMateria(copy) {
	std::cout << "🧊 Ice materia duplicated!" << std::endl;
}

Ice& Ice::operator=(const Ice& copy) {
	if (this != &copy) {
		AMateria::operator=(copy);
		std::cout << "📝 Ice materia swapped in!" << std::endl;
	}
	return *this;
}

Ice::~Ice(){
	std::cout << "🔥 Ice materia melts into nothingness." << std::endl;
}

AMateria* Ice::clone() const{
	return new Ice(*this);
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
