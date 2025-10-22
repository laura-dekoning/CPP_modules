/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 15:07:45 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/22 17:36:07 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string			_name;
	AMateria*			_inventory[4];
	static AMateria*	_onTheFloor[40];
	static int			_dropped;

	void	clearMaterias();

public:
	Character(const std::string& _name);
	Character(const Character &copy);
	Character&	operator=(const Character &copy);
	~Character();

	// Methods
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);

	// Getters
	const std::string&	getName() const;
	AMateria*			getMateria(int i) const;
	AMateria*			getFloorMateria(int i) const;
};

#endif