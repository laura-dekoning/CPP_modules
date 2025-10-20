/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 15:07:45 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/20 18:24:14 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AMateria.hpp"
#include "Character.hpp"

Character::Character(std::string const& name) : _name(name) {
	std::cout << "🧙 Character '" << _name << "' enters the world!" << std::endl;
}

Character::~Character(){
	delete _inventory[];
	std::cout << "💀 Character '" << _name << "' has fallen..." << std::endl;
}

std::string const & Character::getName() const{
	return _name;
}

void Character::equip(AMateria* m){
	
}

void Character::unequip(int idx){
	
}

void Character::use(int idx, ICharacter& target){
	
}



#endif