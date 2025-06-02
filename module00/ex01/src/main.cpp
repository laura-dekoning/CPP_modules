/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/01 19:27:16 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/06/02 19:27:48 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	myPhoneBook;
	Contact		newContact;
	std::string	input;

	std::cout << "Welcome to your PhoneBook!" << std::endl;
	std::cout << "Your PhoneBook is currently empty" << std::endl;
	std::cout << "If you want to fill your PhoneBook, type: ADD" << std::endl;
	std::cout << "If you want to search for a contact, type: SEARCH" << std::endl;
	std::cout << "If you want to exit, type: EXIT" << std::endl;
	while (1)
	{
		std::cout << "Enter command (ADD, SEARCH or EXIT)" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			
		}
		else if (input == "SEARCH")
		{

		}
		else if (input == "EXIT")
		{
			std::cout << "Exiting your PhoneBook" << std::endl;
			return 0;
		}
		else
			std::cout << "Unknown command. I don't know what you want!?!?" << std::endl;

	}
	
}
