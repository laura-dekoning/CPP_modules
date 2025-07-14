/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/07/14 15:54:51 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/07/14 16:29:20 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int	main(){
	Harl	Kevin;

	std::cout << "Testing: DEBUG" << std::endl;
	Kevin.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "Testing: INFO" << std::endl;
	Kevin.complain("INFO");
	std::cout << std::endl;
	std::cout << "Testing: WARNING" << std::endl;
	Kevin.complain("WARNING");
	std::cout << std::endl;
	std::cout << "Testing: ERROR" << std::endl;
	Kevin.complain("ERROR");
	std::cout << std::endl;

	return 0;
}
