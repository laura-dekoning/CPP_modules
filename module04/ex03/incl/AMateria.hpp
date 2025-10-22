/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 14:15:52 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/22 10:26:36 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>

class AMateria
{
	protected:
		const std::string _type;
	public:
		AMateria(std::string const& type);
		AMateria(const AMateria &copy);
		virtual ~AMateria();

		AMateria& operator=(const AMateria &copy);

		std::string const& getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif