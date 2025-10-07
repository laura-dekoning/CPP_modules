/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/04 13:10:35 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/07 12:17:13 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();							// Default constructor
	ScavTrap(const std::string& name);	// Paramaterized constructor
	ScavTrap(const ScavTrap& copy);		// Copy constructor
	~ScavTrap();						// Destructor

	// Assignment
	ScavTrap&	operator=(const ScavTrap& copy);	// Copy assignment constructor

	void		attack(const std::string& target);
	void		guardGate();
};

#endif