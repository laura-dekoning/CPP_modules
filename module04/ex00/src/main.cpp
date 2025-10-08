/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 18:47:15 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/08 19:17:31 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(){
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	meta->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	// const WrongAnimal* animal = new WrongAnimal();
	// const WrongAnimal* cat = new WrongCat();
	// std::cout << cat->getType() << " " << std::endl;
	// cat->makeSound();
	// animal->makeSound();
	delete meta;
	delete i;
	delete j;
	return 0;
}