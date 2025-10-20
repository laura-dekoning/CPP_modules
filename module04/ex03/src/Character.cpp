/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 15:07:45 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/20 15:42:36 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

~Character() {};
std::string const & getName() const;
void equip(AMateria* m);
void unequip(int idx);
void use(int idx, ICharacter& target);


#endif