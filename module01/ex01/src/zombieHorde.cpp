/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/28 11:24:16 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/06/28 12:11:52 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie	*zombieHorde(int N, std::string name){
	if (N <= 0)
		return NULL;
	Zombie *horde = new Zombie[N];
	for (int i = 0 ; i < N; ++i)[
		horde[i].setName(name);
		horde[i].announce();
	]
	return horde;
}