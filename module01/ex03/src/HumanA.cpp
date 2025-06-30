/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/30 16:01:42 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/06/30 18:08:13 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon){
	this->_name = name;
	this->_weapon = weapon;
}

HumanA::~HumanA(){}

void	HumanA::attack(){
	std::cout << _name << "attacked with their" << _weapon.getType() << std::endl;
}
