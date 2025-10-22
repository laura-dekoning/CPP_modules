/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 14:28:23 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/22 12:24:11 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
	std::cout << "🏭 MateriaSource is online — ready to create magic!" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
	std::cout << "🧪 MateriaSource cloned!" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy) {
	if (this != &copy) {
		std::cout << "🧬 MateriaSource updated from another!" << std::endl;
	}
	return *this;
}

~MateriaSource::MateriaSource() {
	std::cout << "⚡ MateriaSource depleted and shutting down." << std::endl;
}

void MateriaSource::learnMateria(AMateria*){
	
}

AMateria* MateriaSource::createMateria(std::string const & type){
	
}