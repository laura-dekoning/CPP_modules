/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/04 14:35:24 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/07 18:40:58 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void printInfo(DiamondTrap &diamond) {
	std::cout << "\n💎 DiamondTrap Info 💎\n";
	std::cout << "Name: " << diamond.getName() << "\n";
	std::cout << "Hit Points: " << diamond.getHit() << "\n";
	std::cout << "Energy Points: " << diamond.getEnergy() << "\n";
	std::cout << "Attack Damage: " << diamond.getAttackDamage() << "\n";
	std::cout << "-----------------------------\n";
}

int main() {
	std::cout << "\n\033[45;97m--- DiamondTrap Testing Arena ---\033[0m\n" << std::endl;

	// Create a DiamondTrap instance
	DiamondTrap dia("ShinyGem");

	printInfo(dia);

	// Perform an attack
	std::cout << "\n--- Combat Test ---" << std::endl;
	dia.attack("EvilBot");

	// Take damage
	dia.takeDamage(35);

	// Repair health
	dia.beRepaired(20);

	// Special ability: whoAmI()
	std::cout << "\n--- Identity Test ---" << std::endl;
	dia.whoAmI();

	// Burn through energy
	std::cout << "\n--- Energy Drain Test ---" << std::endl;
	for (int i = 0; i < 6; ++i)
		dia.attack("Training Dummy");

	// Test copy constructor and assignment
	std::cout << "\n--- Copy and Assignment Tests ---" << std::endl;
	DiamondTrap copyDia(dia);
	DiamondTrap anotherDia;
	anotherDia = dia;

	printInfo(copyDia);
	printInfo(anotherDia);

	std::cout << "\n--- Unique Identity Checks ---" << std::endl;
	copyDia.whoAmI();
	anotherDia.whoAmI();

	// Multiple robot interactions
	std::cout << "\n\033[46;30m--- Robot Battle Royale ---\033[0m" << std::endl;

	ClapTrap clap("CL4P-TR4P");
	ScavTrap scav("SC4V-TR4P");
	FragTrap frag("FR4G-TR4P");

	std::cout << "\n" << dia.getName() << " joins the fight!" << std::endl;

	std::cout << "\nRound 1:\n";
	clap.attack(scav.getName());
	scav.takeDamage(clap.getAttackDamage());

	frag.attack(clap.getName());
	clap.takeDamage(frag.getAttackDamage());

	dia.attack(frag.getName());
	frag.takeDamage(dia.getAttackDamage());

	std::cout << "\nRound 2:\n";
	scav.attack(dia.getName());
	dia.takeDamage(scav.getAttackDamage());

	dia.beRepaired(15);
	dia.attack(scav.getName());
	scav.takeDamage(dia.getAttackDamage());

	std::cout << "\nRound 3:\n";
	frag.highFivesGuys();
	scav.guardGate();
	dia.whoAmI();

	std::cout << "\n\033[42;30m--- DiamondTrap Testing Complete ---\033[0m\n" << std::endl;

	return 0;
}
