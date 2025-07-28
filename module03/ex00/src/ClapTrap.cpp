/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/07/28 15:09:08 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/07/28 15:21:31 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap(std::string name){
	this->_name = name;
}

~ClapTrap(){

}


void ClapTrap::attack(const std::string& target){

}

void ClapTrap::takeDamage(unsigned int amount){

}

void ClapTrap::beRepaired(unsigned int amount){

}
