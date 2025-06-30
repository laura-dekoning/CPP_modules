/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/30 16:01:42 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/06/30 18:12:38 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->_name = name;
}

HumanB::~HumanB(){}

void	HumanB::setWeapon(Weapon weapon){
	this->_weapon = weapon;
}

void	HumanB::attack(){
	std::cout << _name << " attacked with their " << _weapon.getType() << std::endl;
}
