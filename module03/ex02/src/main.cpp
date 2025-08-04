/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/04 14:35:24 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/08/04 14:35:40 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int main() {
	std::cout << "\n--- ScavTrap Test Begins ---\n" << std::endl;

	// Create a ScavTrap instance
	ScavTrap scav("SC4V-TR4P");

	// Perform an attack
	scav.attack("intruder");

	// Take some damage
	scav.takeDamage(30);

	// Repair some health
	scav.beRepaired(20);

	// Activate special mode
	scav.guardGate();

	// Try to burn through energy
	for (int i = 0; i < 60; ++i) {
		scav.attack("practice dummy");
	}

	// Try repairing when out of energy
	scav.beRepaired(10);

	std::cout << "\n--- ScavTrap Test Ends ---\n" << std::endl;

	return 0;
}
