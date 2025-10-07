/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/11 16:20:39 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/07 18:41:37 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <string>

DiamondTrap::DiamondTrap(){
	_name = "Default Diamond";
	ClapTrap::_name = this->_name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << this->_name << " is constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name){
	ClapTrap::_name = this->_name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << this->_name << " is constructed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy){
	std::cout << "DiamondTrap copy constructor called." << std::endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "It was time, DiamondTrap " << this->_name << " has been deconstructed" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& copy){
	if (this != &copy)
		ClapTrap::operator=(copy);
	return *this;
}

void	whoAmI(){
	std::cout << "I'm DiamondTrap " << this->_name;
	std::cout << "and now my other name. I'm ClapTrap " << this->getName() << std::endl;
}
