/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 15:07:45 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/22 12:50:50 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(std::string const& name) : _name(name){
	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
	for (int i = 0; i < 40; i++)
		_onTheFloor[i] = nullptr;
	_dropped = 0;
	std::cout << "🧙 Character '" << _name << "' enters the world!" << std::endl;
}

Character::Character(const Character &copy) : _name(copy.getName()){
	for (int i = 0; i < 4; i++){
		if (copy._inventory[i])
			_inventory[i] = copy._inventory[i]->clone();
		else
			_inventory[i] = nullptr;
	}
	for (int i = 0; i < 40; i++){
		if (copy._onTheFloor[i])
			_onTheFloor[i] = copy._onTheFloor[i]->clone();
		else
			_onTheFloor[i] = nullptr;
	}
	_dropped = copy._dropped;
	std::cout << "🔮 Character '" << _name << "' cloned by magic!" << std::endl;
}

Character::~Character(){
	clearMaterias();
	std::cout << "⚰️ Character '" << _name << "' has fallen..." << std::endl;
}

Character&	Character::operator=(const Character &copy){
	if (this != &copy){
		clearMaterias();
		_name = copy.getName();
		for (int i = 0; i < 4; i++){
			if (copy._inventory[i])
				_inventory[i] = copy._inventory[i]->clone();
		}
		std::cout << "📜 Character '" << _name << "' updated from another!" << std::endl;
	}
	return *this;
}

void	Character::clearMaterias() {
	for (int i = 0; i < 4; i++) {
		if (_inventory[i]) {
			delete _inventory[i];
			_inventory[i] = nullptr;
		}
	}

	for (int i = 0; i < 40; i++) {
		if (_onTheFloor[i]) {
			delete _onTheFloor[i];
			_onTheFloor[i] = nullptr;
		}
	}
	_dropped = 0;
}

// Getters

std::string const & Character::getName() const{
	return _name;
}

AMateria* Character::getMateria(int idx) const {
	if (idx < 0 || idx >= 4)
		return nullptr;
	return _inventory[idx];
}

// Methods
void Character::equip(AMateria* m){
	if (m == nullptr){
		std::cout << "⚠️ Nothing to equip!" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++){
		if (this->_inventory[i] == NULL){
			_inventory[i] = m;
			std::cout << "✨ Got it! " << m->getType() << " is now in slot " << i << std::endl;
			return ;
		}
	}
	std::cout << "⚠️ Your inventory’s stuffed! Clear some space before equipping that." << std::endl;
	return ;
}

void Character::unequip(int idx){
	if (idx < 0 || idx > 3)
		std::cout << "⚠️ Hey! Pick a slot between 0 and 3." << std::endl;
	else if (_inventory[idx] == NULL){
		std::cout << "❌ Nothing here! You can’t drop what you don’t have." << std::endl;
		return ;
	}
	else{
		if (_dropped < 40){
			_onTheFloor[_dropped] = _inventory[idx];
			_dropped++;
			_inventory[idx] = NULL;
		}
		else
			std::cout << "😅 Woah… the floor is maxed out! No more materia can fit here." << std::endl;
	}
}

void Character::use(int idx, ICharacter& target){
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}
