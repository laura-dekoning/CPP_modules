/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 14:28:23 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/20 15:43:00 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AMateria.hpp"


virtual ~IMateriaSource() {}
virtual void learnMateria(AMateria*) = 0;
virtual AMateria* createMateria(std::string const & type) = 0;
