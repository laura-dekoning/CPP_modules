/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 15:07:45 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/24 09:04:32 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

AMateria* Character::_onTheFloor[40] = {nullptr};
int Character::_dropped = 0;

Character::Character(std::string const& name) : _name(name){
	for (int idx = 0; idx < 4; idx++)
		_inventory[idx] = nullptr;
	for (int idx = 0; idx < 40; idx++)
		_onTheFloor[idx] = nullptr;
	_dropped = 0;
	std::cout << "🧙 Character '" << _name << "' enters the world!" << std::endl;
}

Character::Character(const Character &copy) : _name(copy.getName()){
	for (int idx = 0; idx < 4; idx++){
		if (copy._inventory[idx])
			_inventory[idx] = copy._inventory[idx]->clone();
		else
			_inventory[idx] = nullptr;
	}
	for (int idx = 0; idx < 40; idx++){
		if (copy._onTheFloor[idx])
			_onTheFloor[idx] = copy._onTheFloor[idx]->clone();
		else
			_onTheFloor[idx] = nullptr;
	}
	_dropped = copy._dropped;
	std::cout << "🔮 Character '" << _name << "' cloned by magic!" << std::endl;
}

Character::~Character(){
	clearMaterias();
	std::cout << "⚰️  Character '" << _name << "' has fallen..." << std::endl;
}

Character&	Character::operator=(const Character &copy){
	if (this != &copy){
		clearMaterias();
		_name = copy.getName();
		for (int idx = 0; idx < 4; idx++){
			if (copy._inventory[idx])
				_inventory[idx] = copy._inventory[idx]->clone();
		}
		std::cout << "📜 Character '" << _name << "' updated from another!" << std::endl;
	}
	return *this;
}

void	Character::clearMaterias() {
	for (int idx = 0; idx < 4; idx++) {
		if (_inventory[idx]) {
			delete _inventory[idx];
			_inventory[idx] = nullptr;
		}
	}

	for (int idx = 0; idx < 40; idx++) {
		if (_onTheFloor[idx]) {
			delete _onTheFloor[idx];
			_onTheFloor[idx] = nullptr;
		}
	}
	_dropped = 0;
}

// Getters

std::string const & Character::getName() const{
	return _name;
}

AMateria* Character::getMateria(int idx) const {
	if (idx < 0 || idx >= 4) {
		std::cout << "⚠️ Invalid slot index (" << idx  << ")! Please choose between 0 and 3." << std::endl;
		return nullptr;
	}

	if (_inventory[idx] == nullptr) {
		std::cout << "💨 Slot " << idx << " is empty — no Materia there!" << std::endl;
		return nullptr;
	}

	std::cout << "🔍 Retrieved Materia of type '" << _inventory[idx]->getType() << "' from slot " << idx << "." << std::endl;

	return _inventory[idx];
}

AMateria* Character::getFloorMateria(int idx) const {
	if (idx < 0 || idx >= 40) {
		std::cout << "⚠️ Invalid floor index (" << idx << ")! Please choose between 0 and 39." << std::endl;
		return nullptr;
	}

	if (_onTheFloor[idx] == nullptr) {
		std::cout << "💨 Floor slot " << idx << " is empty." << std::endl;
		return nullptr;
	}

	std::cout << "🪄 Retrieved dropped Materia of type '" << _onTheFloor[idx]->getType() << "' from the floor slot " << idx << "." << std::endl;

	return _onTheFloor[idx];
}

// Methods
void Character::equip(AMateria* m){
	if (m == nullptr){
		std::cout << "⚠️ Nothing to equip!" << std::endl;
		return ;
	}
	for (int idx = 0; idx < 4; idx++){
		if (this->_inventory[idx] == NULL){
			_inventory[idx] = m;
			std::cout << "✨ Got it! " << m->getType() << " is now in slot " << idx << std::endl;
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
