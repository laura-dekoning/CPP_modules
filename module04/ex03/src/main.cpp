/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 14:26:23 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/24 17:14:53 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main() {
	std::cout << "\n----- Subject test -----\n" << std::endl;

	IMateriaSource* matSrc = new MateriaSource();
	matSrc->learnMateria(new Ice());
	matSrc->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = matSrc->createMateria("ice");
	me->equip(tmp);
	tmp = matSrc->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete matSrc;

	std::cout << "\n🌟 Welcome to the Materia Arena! 🌟\n" << std::endl;

	// Create a Materia source and teach it some spells
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	// Create a character
	ICharacter* hero = new Character("Arthas");
		
	// Create Materias from the source and equip them
	AMateria* ice = src->createMateria("ice");
	AMateria* cure = src->createMateria("cure");
	hero->equip(ice);
	hero->equip(cure);
	hero->equip(ice);
	hero->equip(cure);

	// Create an enemy
	ICharacter* enemy = new Character("Goblin");

	std::cout << "\n⚔️  Battle begins!" << std::endl;
	hero->use(0, *enemy);  // Ice
	hero->use(1, *enemy);  // Cure

	// Test polymorphism
	std::cout << "\n🔄 Polymorphism test: using base pointers" << std::endl;
	ICharacter* polyHero = hero;
	polyHero->use(0, *enemy);

	// Test deep copy
	std::cout << "\n✨ Cloning hero into heroClone" << std::endl;
	Character* heroClone = new Character(hero->getName() + "_copy"); // cast to concrete type for copy constructor
	heroClone->use(0, *enemy);
	heroClone->use(1, *enemy);

	// Unequip a Materia from clone and show original still works
	std::cout << "\n🛡️ HeroClone unequips slot 0" << std::endl;
	heroClone->unequip(0);
	std::cout << "Original hero still uses ice:" << std::endl;
	hero->use(0, *enemy);

	// Fun: equip multiple Materias
	std::cout << "\n🎉 Equipping more Materias" << std::endl;
	AMateria* ice2 = src->createMateria("ice");
	AMateria* cure2 = src->createMateria("cure");
	hero->equip(ice2);
	hero->equip(cure2);
	hero->use(2, *enemy);
	hero->use(3, *enemy);

	// Cleanup
	delete heroClone;
	delete enemy;
	delete hero;
	delete src;

	std::cout << "\n🏁 Materia Arena closed!" << std::endl;
	return 0;
}
