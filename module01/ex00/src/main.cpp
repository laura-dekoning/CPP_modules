/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/23 13:24:16 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/06/26 21:17:21 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main(){
	Zombie zombieD("Dirk");
	zombieD.announce();
	Zombie *zombieF = newZombie("Frank");
	zombieF->announce();
	delete zombieF;
	randomChump("Gijs");
}
