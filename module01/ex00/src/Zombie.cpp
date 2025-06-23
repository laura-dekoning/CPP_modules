/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/23 13:24:16 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/06/23 20:22:45 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
}

Zombie::~Zombie()
{
	std::cout << Zombie.name << " is destroyed." << std::endl;
}

void	announce(void){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
