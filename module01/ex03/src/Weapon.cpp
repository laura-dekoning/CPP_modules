/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/30 16:01:42 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/07/02 15:36:03 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type){
	this->_type = type;
}

Weapon::~Weapon(){}

void	Weapon::setType(std::string weapon){
	_type = weapon;
}

const std::string	&Weapon::getType() const {
	return _type;
}
