/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 15:07:45 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/20 15:42:48 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AMateria.hpp"

	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
