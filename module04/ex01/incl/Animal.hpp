/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 16:47:03 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/16 18:16:09 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>


class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(const Animal &copy);
		virtual ~Animal();

		Animal&	operator=(const Animal &copy);

		virtual std::string	getType() const;
		virtual void		makeSound() const;
};

#endif