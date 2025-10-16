/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DogChecks.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/16 14:55:46 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/16 16:56:43 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Test.hpp"

void	loadDogIdeas(Brain* dogBrain){
	std::ifstream dogFile("DogBrain.txt");
	if (!dogFile) {
		std::cerr << "Failed to open DogBrain.txt\n";
	} else {
		std::string line;
		int index = 0;
		while (std::getline(dogFile, line) && index < 100) {
			dogBrain->setIdea(index, line);
			index++;
		}
		dogFile.close();
	}
}

void dogChecks() {
	std::cout << "\033[1;93m\n---- Dog checks ----\n\033[0m";

	Dog dog1;
	Dog dog2;

	// Load ideas into each dog’s brain
	loadDogIdeas(dog1.getBrain());
	loadDogIdeas(dog2.getBrain());

	std::cout << "Type check: " << dog1.getType() << ", " << dog2.getType() << std::endl;

	std::cout << "\nDog1 ideas:\n";
	for (int i = 0; i < 10; i++)
		std::cout << "Idea " << i << ": " << dog1.getBrain()->getIdeas()[i] << std::endl;

	std::cout << "\nDog2 ideas:\n";
	for (int i = 0; i < 10; i++)
		std::cout << "Idea " << i << ": " << dog2.getBrain()->getIdeas()[i] << std::endl;

	// Verify independence
	dog1.getBrain()->setIdea(0, "Chase the mailman!");
	std::cout << "\nAfter modifying dog1’s brain:\n";
	std::cout << "dog1[0]: " << dog1.getBrain()->getIdeas()[0] << std::endl;
	std::cout << "dog2[0]: " << dog2.getBrain()->getIdeas()[0] << " (unchanged)\n";
}