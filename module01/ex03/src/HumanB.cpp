/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/30 16:01:42 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/07/02 16:24:23 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL) {
	_name = name;
}

HumanB::~HumanB(){}

void	HumanB::setWeapon(Weapon &weapon){
	_weapon = &weapon;
}

void	HumanB::attack(){
	if (_weapon != NULL)
		std::cout << _name << " attacked with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " cannot attack " << _name << " has no weapon!" << std::endl;
}
