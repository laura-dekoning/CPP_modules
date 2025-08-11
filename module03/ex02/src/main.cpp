/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/04 14:35:24 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/08/11 16:06:18 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int main() {
	std::cout << "\n--- FragTrap Test Begins ---\n" << std::endl;

	// Create a FragTrap instance
	FragTrap scav("FR4G-TR4P");

	// Perform an attack
	scav.attack("the bitch");

	// Take some damage
	scav.takeDamage(30);

	// Repair some health
	scav.beRepaired(20);

	// Activate special mode
	scav.highFivesGuys();

	// Try to burn through energy
	for (int i = 0; i < 60; ++i) {
		scav.attack("practice dummy");
	}

	// Try repairing when out of energy
	scav.beRepaired(10);

	std::cout << "\n--- FragTrap Test Ends ---\n" << std::endl;

	return 0;
}
