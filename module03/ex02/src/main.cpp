/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/04 14:35:24 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/08/11 16:33:27 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int main() {
	std::cout << "\n--- FragTrap Test Begins ---\n" << std::endl;

	// Create a FragTrap instance
	FragTrap frag("FR4G-TR4P");

	// Perform an attack
	frag.attack("the bitch");

	// Take some damage
	frag.takeDamage(30);

	// Repair some health
	frag.beRepaired(20);

	// Activate special mode
	frag.highFivesGuys();

	// Try to burn through energy
	for (int i = 0; i < 105; ++i) {
		frag.attack("practice dummy");
	}

	// Try repairing when out of energy
	frag.beRepaired(10);

	std::cout << "\n--- FragTrap Test Ends ---\n" << std::endl;

	return 0;
}
