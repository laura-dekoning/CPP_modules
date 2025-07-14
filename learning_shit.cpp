/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   learning_shit.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/28 12:24:16 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/07/02 15:39:16 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(){
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	//Printing memory addresses//
	std::cout << &string << std::endl; //memory address of string
	std::cout << stringPTR << std::endl; // memory address of where stringPTR is pointing to
	std::cout << &stringREF << std::endl; // 

	//Printing values//
	std::cout << string << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	string = "hoi";

	std::cout << string << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}