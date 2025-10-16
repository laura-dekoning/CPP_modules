/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DogChecks.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/16 14:55:46 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/16 15:53:56 by lade-kon      ########   odam.nl         */
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
