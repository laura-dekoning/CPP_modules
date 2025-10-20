/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 18:47:15 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/20 14:13:38 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

void	animalChecks(){
	std::cout << "\033[1;92m\n---- Animal checks ----\n\033[0m";

	const int total = 4;
	AAnimal* animals[total];

	// --- Instantiate derived objects only ---
	for (int i = 0; i < total / 2; ++i)
		animals[i] = new Cat();
	for (int i = total / 2; i < total; ++i)
		animals[i] = new Dog();

	std::cout << "\nTypes:\n";
	for (int i = 0; i < total; i++){
		std::cout << "Animal[" << i << "] is a " << animals[i]->getType() << " and makes this sound: ";
		animals[i]->makeSound();
	}

	std::cout << "\nBrains are unique:\n";
	for (int i = 0; i < total / 2; i++)
		std::cout << "Cat brain address: " << static_cast<Cat*>(animals[i])->getBrain() << std::endl;
	for (int i = total / 2; i < total; i++)
		std::cout << "Dog brain address: " << static_cast<Dog*>(animals[i])->getBrain() << std::endl;

	std::cout << "\n\033[1;96m--- Deep Copy Test ---\033[0m" << std::endl;

	// --- Load ideas --- //
	for (int i = 0; i < total; i++) {
		if (i < total / 2)
			static_cast<Cat*>(animals[i])->getBrain()->setIdea(0, "Let's chase some mice!");
		else
			static_cast<Dog*>(animals[i])->getBrain()->setIdea(0, "Get the ball!");
	}

	// --- Print first idea and brain addresses --- //
	std::cout << "\033[1;96m--- Animal Brains Before Deep Copy ---\033[0m\n" << std::endl;
	for (int i = 0; i < total; i++) {
		std::string type = animals[i]->getType();
		Brain* brain = nullptr;

		if (type == "Cat") brain = static_cast<Cat*>(animals[i])->getBrain();
		else brain = static_cast<Dog*>(animals[i])->getBrain();

		std::cout << type << " brain[0]: " << brain->getIdeas()[0]
				  << " | Address: " << brain << std::endl;
	}

	std::cout << "\n\033[0;96m--- Making Deep Copy of Cat & Dog ---\033[0m" << std::endl;

	// --- Make deep copies of first Cat and Dog --- //
	Cat* catCopy = new Cat(*static_cast<Cat*>(animals[0]));
	Dog* dogCopy = new Dog(*static_cast<Dog*>(animals[total / 2]));

	// --- Modify copied brains --- //
	catCopy->getBrain()->setIdea(0, "I want to nap!");
	dogCopy->getBrain()->setIdea(0, "Chase the cat!");

	std::cout << "\n\033[1;95m--- After modifying copies ---\033[0m\n";
	std::cout << "Original Cat brain[0]: "
			  << static_cast<Cat*>(animals[0])->getBrain()->getIdeas()[0] << std::endl;
	std::cout << "Copied Cat brain[0]: " << catCopy->getBrain()->getIdeas()[0] << std::endl;

	std::cout << "Original Dog brain[0]: "
			  << static_cast<Dog*>(animals[total/2])->getBrain()->getIdeas()[0] << std::endl;
	std::cout << "Copied Dog brain[0]: " << dogCopy->getBrain()->getIdeas()[0] << std::endl;

	// --- Print addresses to confirm deep copy --- //
	std::cout << "\nOriginal Cat brain address: "
			  << static_cast<Cat*>(animals[0])->getBrain() << std::endl;
	std::cout << "Copied Cat brain address:   " << catCopy->getBrain() << std::endl;

	std::cout << "Original Dog brain address: "
			  << static_cast<Dog*>(animals[total/2])->getBrain() << std::endl;
	std::cout << "Copied Dog brain address:   " << dogCopy->getBrain() << std::endl;

	for (int i = 0; i< total; i++)
		delete animals[i];
	delete catCopy;
	delete dogCopy;
}

int	main(){
	animalChecks();

	// Cannot instantiate abstract base class anymore:
	// AAnimal a;	//<-- ❌ compile-time error
	// AAnimal* a = new AAnimal(); //<-- ❌ compile-time error

	return 0;
}