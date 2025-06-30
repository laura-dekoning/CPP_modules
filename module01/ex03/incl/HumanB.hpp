/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/30 16:00:33 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/06/30 17:50:20 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon		_weapon;

	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon weapon);
		void	attack();
};


#endif