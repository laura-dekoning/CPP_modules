/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/28 11:24:16 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/06/30 15:41:12 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(){
	int	megaSize = 50;
	int	miniSize = 5;

	std::cout << "TEST: Mega zombieHorde" << std::endl;
	Zombie	*megaHorde = zombieHorde(megaSize, "Karel");
	delete[] megaHorde;
	std::cout << "TEST: Mini zombieHorde" << std::endl;
	Zombie	*miniHorde = zombieHorde(miniSize, "Guusje");
	delete[] miniHorde;

	return 0;
}
