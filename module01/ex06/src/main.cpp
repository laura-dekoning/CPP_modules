/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/07/14 15:54:51 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/07/15 15:10:14 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv){
	Harl	Kevin;

	if (argc != 2){
		std::cout << "Incorrect format\nFormat: ./harlFilter <string>" << std::endl;
		return 1;
	}
	else
		Kevin.complain(argv[1]);
	
	return 0;
}
