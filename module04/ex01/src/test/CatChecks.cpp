/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   CatChecks.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/16 14:55:48 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/16 15:53:35 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Test.hpp"

void	loadCatIdeas(Brain* catBrain){
	std::ifstream catFile("CatBrain.txt");
	if (!catFile) {
		std::cerr << "Failed to open CatBrain.txt\n";
	} else {
		std::string line;
		int index = 0;
		while (std::getline(catFile, line) && index < 100) {
			catBrain->setIdea(index, line);
			index++;
		}
		catFile.close();
	}
}

void catChecks() {
	std::cout << "\033[1;94m\n---- Cat checks ----\n\033[0m";

	Cat cat1;
	Cat cat2;

	// Load ideas into each cat’s brain
	loadCatIdeas(cat1.getBrain());
	loadCatIdeas(cat2.getBrain());

	std::cout << "Type check: " << cat1.getType() << ", " << cat2.getType() << std::endl;

	std::cout << "\nCat1 ideas:\n";
	for (int i = 0; i < 10; i++)
		std::cout << "Idea " << i << ": " << cat1.getBrain()->getIdeas()[i] << std::endl;

	std::cout << "\nCat2 ideas:\n";
	for (int i = 0; i < 10; i++)
		std::cout << "Idea " << i << ": " << cat2.getBrain()->getIdeas()[i] << std::endl;

	// Verify independence
	cat1.getBrain()->setIdea(0, "I want fish!");
	std::cout << "\nAfter modifying cat1’s brain:\n";
	std::cout << "cat1[0]: " << cat1.getBrain()->getIdeas()[0] << std::endl;
	std::cout << "cat2[0]: " << cat2.getBrain()->getIdeas()[0] << " (unchanged)\n";
}