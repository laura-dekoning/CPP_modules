/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/30 16:00:33 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/07/02 16:34:00 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

/**
 * @brief	HumanA always has a weapon.
 * 			To ensure Weapon is not null and reflects updates to the original
 * 			Weapon, us a reference to Weapon.
 * @param	_name: human's name.
 * @param	_weapon: reference to a Weapon object (must be set in constructor)
 */
class HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();
};

#endif