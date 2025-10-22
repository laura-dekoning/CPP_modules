/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 14:15:52 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/22 09:48:58 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &copy);
	virtual ~Ice();

	Ice& operator=(const Ice &copy);

	AMateria*	clone() const override;
	void		use(ICharacter& target) override;
};

#endif