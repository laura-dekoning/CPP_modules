/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/04 13:38:04 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/08/04 14:47:43 by lade-kon      ########   odam.nl         */
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

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode!" << std::endl;
}
