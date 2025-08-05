/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/04 14:57:04 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/08/05 18:18:23 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Construction of FragTrap " << _name << " is completed!" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "Deconstruction of FragTrap " << _name << " is completed!" << std::endl;
}

void	FragTrap::highFiveGuys(void){
	std::cout << "FragTrap " << getName() << " wants to get some highfives!!" << std::endl;
}