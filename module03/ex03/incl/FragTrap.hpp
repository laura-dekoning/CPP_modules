/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/04 14:57:37 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/07 17:32:05 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# pragma once
# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class FragTrap : virtual public ClapTrap
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