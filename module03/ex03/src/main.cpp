/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/08/04 14:35:24 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/08/05 18:26:25 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int main() {
	std::cout << "Creating FragTrap...\n";
	FragTrap frag("FR4G");

	frag.attack("Bandit");
	frag.takeDamage(20);
	frag.beRepaired(15);
	frag.highFivesGuys();

	std::cout << "Destroying FragTrap...\n";
	return 0;
}
