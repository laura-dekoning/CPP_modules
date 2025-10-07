/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/04 14:35:24 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/07 17:16:34 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void printInfo(FragTrap &frag) {
	std::cout << "\nFragTrap Info:\n";
	std::cout << "Name: " << frag.getName() << "\n";
	std::cout << "Hit Points: " << frag.getHit() << "\n";
	std::cout << "Energy Points: " << frag.getEnergy() << "\n";
	std::cout << "Attack Damage: " << frag.getAttackDamage() << "\n";
	std::cout << "-------------------------\n";
}

int main() {
	std::cout << "\n--- Single FragTrap Test Begins ---\n" << std::endl;

	// Create a FragTrap instance
	FragTrap frag_trap("Mister Frag");

	// Perform an attack
	frag_trap.attack("the bitch");

	// Take some damage
	frag_trap.takeDamage(30);

	// Repair some health
	frag_trap.beRepaired(20);

	// Activate special mode
	frag_trap.highFivesGuys();

	// Try to burn through energy
	for (int i = 0; i < 105; ++i) {
		frag_trap.attack("practice dummy");
	}

	// Try repairing when out of energy
	frag_trap.beRepaired(10);

	std::cout << "\n--- FragTrap Test Ends ---\n" << std::endl;
	std::cout << "\n--- Multiple ScavTrap Test Begins ---\n" << std::endl;

	FragTrap a("Kevin");
	FragTrap b(a);
	FragTrap c = b;
	FragTrap d;
	
	printInfo(a);
	printInfo(b);
	printInfo(c);
	printInfo(d);

	std::cout << "\n--- ScavTrap Copy Test ---\n" << std::endl;

	a.attack("someone");
	a.takeDamage(12);
	a.beRepaired(7);
	a.highFivesGuys();

	std::cout << std::endl;

	b.attack("an enemy");
	b.takeDamage(25);
	b.beRepaired(4);
	b.highFivesGuys();

	std::cout << std::endl;

	c.attack("the team");
	c.takeDamage(300);
	c.beRepaired(15);
	c.highFivesGuys();

	std::cout << std::endl;

	d.attack("everyone");
	d.takeDamage(0);
	d.beRepaired(20);
	d.highFivesGuys();

	std::cout << std::endl;

	c = d;
	std::cout << "------------" << std::endl;

	std::cout << std::endl;

	c.attack("myself");
	c.takeDamage(18);
	c.beRepaired(9);
	c.highFivesGuys();

	std::cout << std::endl;

		std::cout << "\033[45;97m" << "Welcome to the Robot Arena!" << "\033[0m" << std::endl;

	ClapTrap clap("CL4P-TR4P");
	ScavTrap scav("SC4V-TR4P");
	FragTrap frag("FR4G-TR4P");

	std::cout << "\nScavTrap activates guard gate mode!" << std::endl;
	scav.guardGate();

	std::cout << "\nFragTrap want tries to be friends with high fives!" << std::endl;
	frag.highFivesGuys();

	std::cout << "\n--- Battle Begins ---" << std::endl;

	// Round 1
	std::cout << "\nRound 1:" << std::endl;
	std::cout << clap.getName() << " attacks " << scav.getName() << "!" << std::endl;
	clap.attack(scav.getName());
	scav.takeDamage(clap.getAttackDamage());

	std::cout << frag.getName() << " jumps in to attack " << clap.getName() << "!" << std::endl;
	frag.attack(clap.getName());
	clap.takeDamage(frag.getAttackDamage());

	std::cout << scav.getName() << " retaliates against " << frag.getName() << "!" << std::endl;
	scav.attack(frag.getName());
	frag.takeDamage(scav.getAttackDamage());

	// Round 2
	std::cout << "\nRound 2:" << std::endl;
	std::cout << clap.getName() << " fires at " << frag.getName() << "!" << std::endl;
	clap.attack(frag.getName());
	frag.takeDamage(clap.getAttackDamage());

	std::cout << scav.getName() << " attacks " << clap.getName() << " again!" << std::endl;
	scav.attack(clap.getName());
	clap.takeDamage(scav.getAttackDamage());

	std::cout << frag.getName() << " counterattacks " << scav.getName() << "!" << std::endl;
	frag.attack(scav.getName());
	scav.takeDamage(frag.getAttackDamage());

	// Round 3
	std::cout << "\nRound 3:" << std::endl;
	std::cout << clap.getName() << " attacks " << scav.getName() << " with full force!" << std::endl;
	clap.attack(scav.getName());
	scav.takeDamage(clap.getAttackDamage());

	std::cout << frag.getName() << " jumps in to heal " << clap.getName() << "!" << std::endl;
	frag.beRepaired(20); // Assuming FragTrap has a beRepaired() method

	std::cout << scav.getName() << " makes a final attack on " << frag.getName() << "!" << std::endl;
	scav.attack(frag.getName());
	frag.takeDamage(scav.getAttackDamage());

	std::cout << "\n--- Battle Over ---\n" << std::endl;

	return 0;
}
