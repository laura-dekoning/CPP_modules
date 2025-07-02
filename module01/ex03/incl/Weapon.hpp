/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/30 16:00:33 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/07/02 16:30:44 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP


# include <string>
# include <iostream>

class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		const std::string	&getType() const;
		void				setType(std::string type);
};

#endif