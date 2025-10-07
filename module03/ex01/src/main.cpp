/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/04 14:35:24 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/07 17:06:06 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void printInfo(ScavTrap &scav) {
	std::cout << "\nScavTrap Info:\n";
	std::cout << "Name: " << scav.getName() << "\n";
	std::cout << "Hit Points: " << scav.getHit() << "\n";
	std::cout << "Energy Points: " << scav.getEnergy() << "\n";
	std::cout << "Attack Damage: " << scav.getAttackDamage() << "\n";
	std::cout << "-------------------------\n";
}

int main() {
	std::cout << "\n--- Single ScavTrap Test Begins ---\n" << std::endl;

	// Create a ScavTrap instance
	ScavTrap scav_trap("Mister Scav");

	// Perform an attack
	scav_trap.attack("intruder");

	// Take some damage
	scav_trap.takeDamage(30);

	// Repair some health
	scav_trap.beRepaired(20);

	// Activate special mode
	scav_trap.guardGate();

	// Try to burn through energy
	for (int i = 0; i < 50; ++i) {
		scav_trap.attack("practice dummy");
	}

	// Try repairing when out of energy
	scav_trap.beRepaired(10);

	std::cout << "\n--- ScavTrap Test Ends ---\n" << std::endl;

	std::cout << "\n--- Multiple ScavTrap Test Begins ---\n" << std::endl;

	ScavTrap a("Aron");
	ScavTrap b(a);
	ScavTrap c = b;
	ScavTrap d;
	
	printInfo(a);
	printInfo(b);
	printInfo(c);
	printInfo(d);

	std::cout << "\n--- ScavTrap Copy Test ---\n" << std::endl;

	a.attack("someone");
	a.takeDamage(12);
	a.beRepaired(7);
	a.guardGate();

	std::cout << std::endl;

	b.attack("an enemy");
	b.takeDamage(25);
	b.beRepaired(4);
	b.guardGate();

	std::cout << std::endl;

	c.attack("the team");
	c.takeDamage(300);
	c.beRepaired(15);
	c.guardGate();

	std::cout << std::endl;

	d.attack("everyone");
	d.takeDamage(0);
	d.beRepaired(20);
	d.guardGate();

	std::cout << std::endl;

	c = d;

	c.attack("myself");
	c.takeDamage(18);
	c.beRepaired(9);
	c.guardGate();

	std::cout << std::endl;
	std::cout << "\033[45;97m" << "Welcome to the Robot Arena!" << "\033[0m" << std::endl;

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

	std::cout << "\n--- Battle Over ---\n" << std::endl;

	return 0;
}
