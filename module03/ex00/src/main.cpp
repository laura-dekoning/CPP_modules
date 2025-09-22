/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/07/28 15:09:04 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/09/22 17:43:25 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap test;
	ClapTrap clap("CL4P-TP");

	std::cout << "\n--- Testing ClapTrap Functions ---\n" << std::endl;

	// Simulate attacking a random target (not another ClapTrap)
	clap.attack("a dummy target");

	// Simulate ClapTrap taking some damage (e.g., from the environment)
	clap.takeDamage(3);

	// Simulate ClapTrap getting repaired
	clap.beRepaired(5);

	// More actions to test energy depletion
	clap.attack("target 1");
	clap.attack("target 2");
	clap.attack("target 3");

	// Take more damage
	clap.takeDamage(10);

	// Try repairing again
	clap.beRepaired(2);

	std::cout << "\n--- End of Test ---\n" << std::endl;

	return 0;
}
