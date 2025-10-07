/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/04 14:57:37 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/07 12:26:23 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& copy);	// Copy constructor
	~FragTrap();

	// Assignment
	FragTrap&	operator=(const FragTrap& copy);	// Copy assignment constructor

	void	highFivesGuys(void);
};




#endif