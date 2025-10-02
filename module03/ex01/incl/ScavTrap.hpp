/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/04 13:10:35 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/02 18:52:28 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& copy);	// Copy constructor
	~ScavTrap();

	// Assignment
	ScavTrap&	operator=(const ScavTrap& copy);	// Copy assignment constructor

	void	attack(const std::string& target);
	void	guardGate();
};




#endif