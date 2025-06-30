/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/23 13:24:16 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/06/30 15:37:00 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main(){
	std::cout << "TEST: Storage type (heap) | Lifetime (end of scope)" << std::endl;
	Zombie zombieD("Dirk");
	zombieD.announce();
	std::cout << "TEST: Storage type (stack) | Lifetime (until delete)" << std::endl;
	Zombie *zombieF = newZombie("Frank");
	zombieF->announce();
	delete zombieF;
	std::cout << "TEST: Storage type (heap) | Lifetime (end of function call)" << std::endl;
	randomChump("Gijs");
	return 0;
}
