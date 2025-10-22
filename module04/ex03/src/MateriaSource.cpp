/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 14:28:23 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/22 10:30:15 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
	std::cout << "🧪 MateriaSource initialized — ready to create magic!" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy){

}

~MateriaSource::MateriaSource() {
	std::cout << "🧬 MateriaSource depleted and shutting down." << std::endl;
}

void MateriaSource::learnMateria(AMateria*){
	
}

AMateria* MateriaSource::createMateria(std::string const & type){
	
}