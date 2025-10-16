/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BrainChecks.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/16 14:57:10 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/16 15:54:30 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Test.hpp"

void	loadBrainIdeas(Brain* brainBrain){
	std::ifstream brainFile("Brain.txt");
	if (!brainFile) {
		std::cerr << "Failed to open brainBrain.txt\n";
	} else {
		std::string line;
		int index = 0;
		while (std::getline(brainFile, line) && index < 10) {
			brainBrain->setIdea(index, line);
			index++;
		}
		brainFile.close();
	}
}

void	brainChecks(){
	std::cout << "\033[1;35m\n---- Shallow and Deep copy ----\n\033[0m" << std::endl;

	// --------- First brian --------- //
	Brain* brain = new Brain;
	loadBrainIdeas(brain);
	std::cout << "\nBrain ideas:\n";
	const std::string* brainIdeas = brain->getIdeas();
	for (int i = 0; i < 10; i++)
	std::cout << "Idea " << i << ": " << brainIdeas[i] << "\n" << std::endl;

	// ------ Shallow brain copy ----- //
	Brain* shallowBrain = brain;
	// ------- Deep brain copy ------- //
	Brain* deepBrain = new Brain(*brain);

	std::cout << "\n\033[42m--- Before modification ---\033[0m\n";
	std::cout << "brain[0]: " << brain->getIdeas()[0] << std::endl;
	std::cout << "shallowBrain[0]: " << shallowBrain->getIdeas()[0] << " (same as brain)\n";
	std::cout << "deepBrain[0]: " << deepBrain->getIdeas()[0] << " (independent copy)\n";

	// Modify shallow and deep brains with new “ideas”
	shallowBrain->setIdea(0, "Remember to drink water");
	std::cout << "\nsetIdea(0, \"Remember to drink water\") on shallowBrain\n";

	deepBrain->setIdea(0, "Start a new hobby");
	std::cout << "setIdea(0, \"Start a new hobby\") on deepBrain\n";

	std::cout << "\n\033[41m--- After modification ---\033[0m\n";
	std::cout << "brain[0]: " << brain->getIdeas()[0] << " (changed via shallowBrain)\n";
	std::cout << "shallowBrain[0]: " << shallowBrain->getIdeas()[0] << " (same as brain)\n";
	std::cout << "deepBrain[0]: " << deepBrain->getIdeas()[0] << " (independent)\n";

	// Print addresses to visualize memory difference
	std::cout << "\n--- Memory addresses ---\n";
	std::cout << "brain: " << brain << std::endl;
	std::cout << "shallowBrain: " << shallowBrain << " (same address)\n";
	std::cout << "deepBrain: " << deepBrain << " (different address)\n" << std::endl;

	delete deepBrain;
	// delete shallowBrain; Doesn't work because its pointing to same memory as brain. It will lead to a double free.
	delete brain;
}
