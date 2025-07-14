/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/07/14 15:54:51 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/07/14 17:30:42 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(){
	Harl	Oraya;

	std::cout << "----- Test 1 -----" << std::endl;
	std::cout << "=== TEST : DEBUG ===" << std::endl;
	Oraya.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "=== TEST : INFO ===" << std::endl;
	Oraya.complain("INFO");
	std::cout << std::endl;
	std::cout << "=== TEST : WARNING ===" << std::endl;
	Oraya.complain("WARNING");
	std::cout << std::endl;
	std::cout << "=== TEST : ERROR ===" << std::endl;
	Oraya.complain("ERROR");
	std::cout << std::endl;

	std::cout << "----- Test 2 -----" << std::endl;
	std::cout << "=== TEST : WARNING ===" << std::endl;
	Oraya.complain("WARNING");
	std::cout << std::endl;
	std::cout << "=== TEST : ERROR ===" << std::endl;
	Oraya.complain("ERROR");
	std::cout << std::endl;

	return 0;
}
