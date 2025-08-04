/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/04 13:10:35 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/08/04 14:43:40 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name);
	~ScavTrap();

	void	guardGate();
};




#endif