/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 16:55:06 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/20 13:44:34 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain*	_brain;
	public:
		Dog();
		Dog(const Dog &copy);
		~Dog();

		Dog&	operator=(const Dog &copy);

		void	makeSound() const override;
		Brain*	getBrain() const;
};


#endif