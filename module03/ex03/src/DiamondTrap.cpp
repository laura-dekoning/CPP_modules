/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/11 16:20:39 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/15 13:57:19 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <string>

DiamondTrap::DiamondTrap(){
	this->_name = "Default Diamond";
	ClapTrap::_name = this->_name + "_clap_name";
	FragTrap tempFrag;
	this->_hitPoints = tempFrag.getHit();
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = tempFrag.getAttackDamage();
	std::cout << "DiamondTrap " << this->_name << " is constructed!" << std::endl;
}

/* Omdat FragTrap::_attackDamage geen objectmember is, maar een instance member van een object dat nog niet bestaat maakt het probleem. Je kunt niet zomaar een instance member van een andere class lezen zonder een object. Dus er is een temp object gemaakt. */
DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name){
	this->_name = name;
	ClapTrap::_name = this->_name + "_clap_name";
	FragTrap tempFrag;
	this->_hitPoints = tempFrag.getHit();
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = tempFrag.getAttackDamage();
	std::cout << "DiamondTrap " << this->_name << " is constructed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), _name(copy._name){
	std::cout << "DiamondTrap copy constructor called." << std::endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "It was time, DiamondTrap " << this->_name << " has been deconstructed" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& copy){
	std::cout << "DiamondTrap copy assignment operator called." << std::endl;
	if (this != &copy){
		ClapTrap::operator=(copy);
		this->_name = copy._name;
		this->_hitPoints = copy._hitPoints;
		this->_energyPoints = copy._energyPoints;
		this->_attackDamage = copy._attackDamage;
	}
	return *this;
}

void	DiamondTrap::whoAmI(){
	std::cout << "Name: " << this->_name;
	std::cout << "\nClapTrap::name: " << this->getName() << std::endl;
}
