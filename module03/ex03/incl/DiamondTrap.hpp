/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/11 16:21:42 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/08 13:55:36 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <string>

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	_name;
public:
	// Constructors & Destructor
	DiamondTrap();							// Default constructor
	DiamondTrap(const std::string& name);	// Paramaterized constructor
	DiamondTrap(const DiamondTrap& copy);	// Copy constructor
	~DiamondTrap();							// Destructor

	// using FragTrap::_hitPoints;
	// using ScavTrap::_energyPoints;
	// using FragTrap::_attackDamage;

	// Assignment
	DiamondTrap&	operator=(const DiamondTrap& copy);	// Copy assignment constructor

	void	whoAmI();
	using	ScavTrap::attack;
};

#endif