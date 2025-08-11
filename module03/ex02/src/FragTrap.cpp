/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/04 14:57:04 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/08/11 16:17:53 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "And now FragTrap " << _name << " is constructed" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "It was time, FragTrap " << _name << " has been deconstructed" << std::endl;
}

void	FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << _name << " shouts: \"High five, everyone! Don’t leave me hangin’!\" 🙌" << std::endl;
}