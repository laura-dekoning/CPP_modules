/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Test.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/16 14:56:15 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/16 18:40:39 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
#define TEST_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

void	brainChecks();
void	catChecks();
void	dogChecks();
void	animalChecks();
void	loadCatIdeas(Brain* catBrain);
void	loadDogIdeas(Brain* dogBrain);


#endif