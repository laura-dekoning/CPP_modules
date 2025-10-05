/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/28 11:24:16 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/05 13:34:27 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(){
	int	megaSize = 50;
	int	miniSize = 5;

	std::cout << "\033[45;97m" << "TEST: Mega zombieHorde" << "\033[0m" << std::endl;
	Zombie	*megaHorde = zombieHorde(megaSize, "Karel");
	for (int i = 0 ; i < megaSize; ++i){
		megaHorde[i].announce();
	}
	delete[] megaHorde;

	std::cout << "\033[45;97m" << "TEST: Mini zombieHorde" << "\033[0m" << std::endl;
	Zombie	*miniHorde = zombieHorde(miniSize, "Guusje");
	for (int i = 0 ; i < miniSize; ++i){
		miniHorde[i].announce();
	}
	delete[] miniHorde;

	return 0;
}
