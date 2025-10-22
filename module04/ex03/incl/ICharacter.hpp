/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 15:07:45 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/22 09:55:49 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>

// Forward declaration, since only using AMateria* > no need to include full header. Avoiding circular include between ICharacter and AMateria.
class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif