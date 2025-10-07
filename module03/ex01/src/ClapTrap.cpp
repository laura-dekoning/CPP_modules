/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/07/28 15:09:08 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/07 12:39:08 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default Mister"), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap " << _name << " has been constructed!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap " << _name << " has been constructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) : _name(copy._name), _hitPoints(copy._hitPoints), _energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage){}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << _name << " has been deconstructed!" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& copy){
	if (this != &copy){
		_name = copy._name;
		_hitPoints = copy._hitPoints;
		_energyPoints = copy._energyPoints;
		_attackDamage = copy._attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target){
	if (getEnergy() > 0 && getHit() > 0){
		std::cout << "⚡ ClapTrap " << getName() << " lunges at " << target << ", dealing a shocking " << getAttackDamage() << " points of damage! ⚔️" << std::endl;
		setEnergy(getEnergy() - 1);
	}
	else{
		std::cout << "💤 ClapTrap " << getName() << " is too exhausted or damaged to attack!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (getHit() <= amount){
		setHit(0);
	}
	else{
		setHit(getHit() - amount);
	}
	std::cout << "💢 Ouch! ClapTrap " << getName() << " took " << amount << " damage! Current HP: " << getHit() << " 💔" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (getEnergy() > 0 && getHit() > 0){
		setHit(getHit() + amount);
		setEnergy(getEnergy() - 1);

		std::cout << "🔧 ClapTrap " << getName() << " patched itself up for " << amount << " health points! Feeling better already. Current HP: " << getHit() << " ❤️" << std::endl;
	}
	else {
		std::cout << "😵 ClapTrap " << getName() << " can't repair — no energy or too damaged!" << std::endl;
	}
}

std::string ClapTrap::getName(){
	return _name;
}

unsigned int ClapTrap::getDamage(){
	return _attackDamage;
}

unsigned int ClapTrap::getEnergy(){
	return _energyPoints;
}

unsigned int ClapTrap::getHit(){
	return _hitPoints;
}

unsigned int ClapTrap::getAttackDamage(){
	return _attackDamage;
}

void ClapTrap::setHit(unsigned int amount){
	_hitPoints = amount;
}

void ClapTrap::setEnergy(unsigned int amount){
	_energyPoints = amount;
}
