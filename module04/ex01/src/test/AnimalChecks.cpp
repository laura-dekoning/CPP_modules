/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AnimalChecks.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/16 14:55:53 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/16 15:41:56 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Test.hpp"

void	animalChecks(){
	int		total = 10;
	Animal*	animals[total];
	for (int i = 0; i < total; i++){
		if (i < total / 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	for (int i = 0; i < total; i++){
		std::cout << animals[i]->getType() << i << " : " << std::endl;
		animals[i]->makeSound();
	}
	for (int i = 0; i< total; i++)
		delete animals[i];
}