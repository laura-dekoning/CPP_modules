/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/28 11:24:16 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/06/28 12:19:03 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main(){
	int	megaSize = 50;
	int	miniSize = 5;

	std::cout << "Testing the zombie horde" << std::endl;
	Zombie	*megaHorde = zombieHorde(megaSize, "Karel");
	delete[] megaHorde;
	Zombie	*miniHorde = zombieHorde(miniSize, "Guusje");
	delete[] miniHorde;

	return 0;
}
