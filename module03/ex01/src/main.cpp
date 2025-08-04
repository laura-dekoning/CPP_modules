/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/04 14:35:24 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/08/04 15:36:09 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	std::cout << "\n--- ScavTrap Test Begins ---\n" << std::endl;

	// Create a ScavTrap instance
	ScavTrap scav_trap("SC4V-TR4P");

	// Perform an attack
	scav_trap.attack("intruder");

	// Take some damage
	scav_trap.takeDamage(30);

	// Repair some health
	scav_trap.beRepaired(20);

	// Activate special mode
	scav_trap.guardGate();

	// Try to burn through energy
	for (int i = 0; i < 60; ++i) {
		scav_trap.attack("practice dummy");
	}

	// Try repairing when out of energy
	scav_trap.beRepaired(10);



	std::cout << "\n--- ScavTrap Test Ends ---\n" << std::endl;

	std::cout << "Welcome to the Robot Arena!\n\n";

	ClapTrap clap("CL4P-TR4P");
	ScavTrap scav("SC4V-TR4P");

	std::cout << "\nScavTrap activates guard gate mode!\n";
	scav.guardGate();

	std::cout << "\n--- Battle Begins ---\n";

	std::cout << "\nRound 1: " << clap.getName() << " attacks " << scav.getName() << "!\n";
	clap.attack(scav.getName());
	scav.takeDamage(clap.getAttackDamage());

	std::cout << "\nRound 2: " << scav.getName() << " counterattacks!\n";
	scav.attack(clap.getName());
	clap.takeDamage(scav.getAttackDamage());

	std::cout << "\nRound 3: " << clap.getName() << " fires again!\n";
	clap.attack(scav.getName());
	scav.takeDamage(clap.getAttackDamage());

	std::cout << "\nRound 4: " << scav.getName() << " finishes with a savage attack!\n";
	scav.attack(clap.getName());
	clap.takeDamage(scav.getAttackDamage());

	std::cout << "\n--- Battle Over ---\n";

	return 0;
}
