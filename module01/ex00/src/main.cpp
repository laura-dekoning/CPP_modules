/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/23 13:24:16 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/05 13:25:00 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main(){
	std::cout << "\033[46;97m" << "TEST: Storage type (heap) | Lifetime (end of scope)" << "\033[0m" << std::endl;
	Zombie zombieD("Dirk");
	zombieD.announce();
	std::cout << "\033[46;97m" << "TEST: Storage type (stack) | Lifetime (until delete)" << "\033[0m" << std::endl;
	Zombie *zombieF = newZombie("Frank");
	zombieF->announce();
	delete zombieF;
	std::cout << "\033[46;97m" << "TEST: Storage type (heap) | Lifetime (end of function call)" << "\033[0m" << std::endl;
	randomChump("Gijs");
	return 0;
}
