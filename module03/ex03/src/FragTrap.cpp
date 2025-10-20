/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/04 14:57:04 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/15 13:41:33 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap(){
	_name = "Default Frag";
	_hitPoints = 20;
	_energyPoints = 20;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " is constructed!" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name){
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "And now FragTrap " << _name << " is constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy){
	std::cout << "FragTrap copy constructor called." << std::endl;
	*this = copy;
}

FragTrap::~FragTrap(){
	std::cout << "It was time, FragTrap " << _name << " has been deconstructed" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& copy){
	if (this != &copy)
		ClapTrap::operator=(copy);
	return *this;
}

void	FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << _name << " shouts: \"High five, everyone! Don’t leave me hangin’!\" 🙌" << std::endl;
}
