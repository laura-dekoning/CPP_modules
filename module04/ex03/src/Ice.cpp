/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 18:02:43 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/20 18:34:19 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AMateria.hpp"
#include "Ice.hpp"


Ice::Ice() {
	AMateria::_type = "ice";
	std::cout << "❄️ Ice materia forged — cold and sharp!" << std::endl;
}

Ice::~Ice() {
	std::cout << "🔥 Ice materia melts into nothingness." << std::endl;
}


AMateria* Ice::clone() const{
	
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
