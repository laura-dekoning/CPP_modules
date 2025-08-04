/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/04 13:38:04 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/08/04 16:44:53 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " is constructed!" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << _name << " is deconstructed!" << std::endl;
}

void	ScavTrap::attack(const std::string& target){
	if (getEnergy() > 0 && getHit() > 0){
		std::cout << "ScavTrap " << getName() << " launches a dramatic insult at " << target << ", causing emotional damage (" << getAttackDamage() << " pts)!" << std::endl;
		setEnergy(getEnergy() - 1);
	}
	else{
		std::cout << "💤 ClapTrap " << getName() << " is too exhausted or damaged to attack!" << std::endl;
	}

}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode!" << std::endl;
}
