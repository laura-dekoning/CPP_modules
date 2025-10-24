/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 14:28:23 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/24 15:59:01 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
	for (int idx = 0; idx < 4; idx++)
		_templates[idx] = nullptr;
	std::cout << "🏭 MateriaSource is online — ready to create magic!" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
	for (int idx = 0; idx < 4; idx++){
		if (copy._templates[idx])
			_templates[idx] = copy._templates[idx]->clone();
		else
			_templates[idx] = nullptr;
	}
	std::cout << "🧪 MateriaSource cloned!" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy) {
	for (int idx = 0; idx < 4; idx++){
		if (this != &copy) {
			clearTemplates();
				_templates[idx] = copy._templates[idx]->clone();
		}
		else
			_templates[idx] = nullptr;
	}
	std::cout << "🧬 MateriaSource updated from another!" << std::endl;
	return *this;
}

MateriaSource::~MateriaSource() {
	clearTemplates();
	std::cout << "⚡ MateriaSource depleted and shutting down." << std::endl;
}

void MateriaSource::clearTemplates(){
	for (int idx = 0; idx < 4; idx++) {
		if (_templates[idx]) {
			delete _templates[idx];
			_templates[idx] = nullptr;
		}
	}
}

void MateriaSource::learnMateria(AMateria* m){
	if (!m)
		return ;
	for (int idx = 0; idx < 4; idx++){
		if (_templates[idx] == nullptr){
			_templates[idx] = m->clone();
			std::cout << "📘 Learned new Materia of type " << m->getType() << std::endl;
			delete m;
			return ;
		}
	}
	std::cout << "⚠️ MateriaSource is full!" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type){
	for (int idx = 0; idx < 4; idx++){
		if (_templates[idx]->getType() == type){
			std::cout << "🔮 Created new Materia of type " << _templates[idx]->getType() << std::endl;
			return _templates[idx]->clone();
		}
	}
	std::cout << "❓ Unknown Materia type '" << type << "'!" << std::endl;
	return nullptr;
}