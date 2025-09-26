/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/07/28 15:09:11 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/09/26 11:48:37 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:
	// Constructors & Destructor
	ClapTrap();						// Default constructor
	ClapTrap(std::string name);		// Paramaterized constructor
	ClapTrap(const ClapTrap& copy);	// Copy constructor
	~ClapTrap();					// Destructor

	// Assignment
	ClapTrap&	operator=(const ClapTrap& copy);	// Copy assignment constructor

	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	std::string		getName();
	unsigned int	getDamage();
	unsigned int	getEnergy();
	unsigned int	getHit();
	unsigned int	getAttackDamage();
	void			setHit(unsigned int amount);
	void			setEnergy(unsigned int amount);

};




#endif