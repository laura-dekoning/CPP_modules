/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 16:52:56 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/20 13:44:29 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain*	_brain;
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();

		Cat&	operator=(const Cat &copy);

		void	makeSound() const override;
		Brain*	getBrain() const;
};



#endif