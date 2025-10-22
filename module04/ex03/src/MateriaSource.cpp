/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 14:28:23 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/22 17:49:28 by lade-kon      ########   odam.nl         */
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
		if (copy._templates)
			_templates[idx] = copy._templates[idx];
		else
			_templates[idx] = nullptr;
	}
	std::cout << "🧪 MateriaSource cloned!" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy) {
	if (this != &copy) {
		clearMaterias();
		for (int idx = 0; idx < 4; idx++)
			_templates[idx] = copy._templates[idx]->clone();
	}
	std::cout << "🧬 MateriaSource updated from another!" << std::endl;
	return *this;
}

MateriaSource::~MateriaSource() {
	clearMaterias();
	std::cout << "⚡ MateriaSource depleted and shutting down." << std::endl;
}

void MateriaSource::learnMateria(AMateria* m){
	for (int idx = 0; idx < 4; idx++){
		if (_templates[idx] == nullptr){
			_templates[idx] = m->clone();
			std::cout << "📘 Learned new Materia of type " << m->getType() << std::endl;
			return ;
		}
	}
	
}

AMateria* MateriaSource::createMateria(std::string const & type){
	
}