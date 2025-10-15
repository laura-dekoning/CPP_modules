/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 18:47:15 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/15 15:49:26 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

void	brainChecks(){
	Brain*	catBrain = new Brain;
	Brain*	dogBrain = new Brain;

	// ------ Loading Cat ideas ------ //
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
	// ------ Loading Dog ideas ------ //
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
	// ------- Printing ideas -------- //
	std::cout << "Cat Brain ideas:\n";
	const std::string* catIdeas = catBrain->getIdeas();
	for (int i = 0; i < 10; i++)
		std::cout << "Idea " << i << ": " << catIdeas[i] << std::endl;

	std::cout << "\nDog Brain ideas:\n";
	const std::string* dogIdeas = dogBrain->getIdeas();
	for (int i = 0; i < 10; i++)
		std::cout << "Idea " << i << ": " << dogIdeas[i] << std::endl;

		
	// ------ Shallow brain copy ----- //
	Brain* shallowBrain = dogBrain;
	// ------- Deep brain copy ------- //
	Brain* deepBrain = new Brain(*catBrain);

	std::cout << "Before modification:\n";
	std::cout << "dogBrain[0]: " << dogBrain->getIdeas()[0] << std::endl;
	std::cout << "shallowBrain[0]: " << shallowBrain->getIdeas()[0] << " (same as dogBrain)\n";
	std::cout << "catBrain[0]: " << catBrain->getIdeas()[0] << std::endl;
	std::cout << "deepBrain[0]: " << deepBrain->getIdeas()[0] << " (copied from catBrain)\n";

	// Modify shallow and deep brains
	shallowBrain->setIdea(0, "Bark loudly");
	std::cout << "setIdea(0, \"Bark loudly\") van shallowBrain" << std::endl;
	deepBrain->setIdea(0, "Purr");
	std::cout << "setIdea(0, \"Purr\") van deepBrain" << std::endl;

	std::cout << "\nAfter modification:\n";
	std::cout << "dogBrain[0]: " << dogBrain->getIdeas()[0] << " (changed via shallowBrain)\n";
	std::cout << "shallowBrain[0]: " << shallowBrain->getIdeas()[0] << " (same as dogBrain)\n";
	std::cout << "catBrain[0]: " << catBrain->getIdeas()[0] << " (unchanged)\n";
	std::cout << "deepBrain[0]: " << deepBrain->getIdeas()[0] << " (independent copy)\n";

	// Print addresses to visualize
	std::cout << "\nAddresses:\n";
	std::cout << "dogBrain: " << dogBrain << std::endl;
	std::cout << "shallowBrain: " << shallowBrain << std::endl;
	std::cout << "catBrain: " << catBrain << std::endl;
	std::cout << "deepBrain: " << deepBrain << std::endl;

	delete deepBrain;
	delete shallowBrain;
	// delete dogBrain; gives a memory leak, because shallowBrain and dogBrain point to the same memory. 
	delete catBrain;
}

void	catChecks(){

}

void	dogChecks(){

}

// void	animalChecks(){
// 	int		total = 10;
// 	Animal*	animals[total];
// 	for (int i = 0; i < total; i++){
// 		if (i < total / 2)
// 			animals[i] = new Cat();
// 		else
// 			animals[i] = new Dog();
// 	}
// 	for (int i = 0; i < total; i++){
// 		std::cout << animals[i]->getType() << i << " : " << animals[i]->makeSound() << std::endl;
// 	}
// 	delete[] animals;
// }

int	main(){
	// animalChecks();
	// dogChecks();
	// catChecks();
	brainChecks();

	return 0;
}