/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 14:17:08 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/20 15:41:23 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AMateria.hpp"
#include "ICharachter.hpp"

AMateria(std::string const& type) : _type(type){
	std::cout << "✨ AMateria of type '" << _type << "' created!" << std::endl;
}

virtual ~AMateria(){
	std::cout << "💨 AMateria of type '" << _type << "' destroyed!" << std::endl;
}

std::string const& getType() const{
	return _type;
}

virtual void use(ICharacter& target){
	
}





