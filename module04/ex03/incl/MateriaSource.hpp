/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 14:28:23 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/20 18:07:05 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AMateria.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "🧪 MateriaSource initialized — ready to create magic!" << std::endl;
}

~MateriaSource::MateriaSource() {
	std::cout << "🧬 MateriaSource depleted and shutting down." << std::endl;
}



void learnMateria(AMateria*);
AMateria* createMateria(std::string const & type);
