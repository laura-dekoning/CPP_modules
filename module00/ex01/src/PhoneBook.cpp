/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/01 19:27:16 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/06/04 18:20:01 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : _index(0) {std::cout << "PhoneBook constructed" << std::endl;}
PhoneBook::~PhoneBook() {std::cout << "PhoneBook deconstructed" << std::endl;}

void	PhoneBook::addContact() {
	Contact		newContact;
	std::string	input;
	
	if (_index == 8)
	{
		std::cout << "Oh no, there is only room for 8 contacts!" << std::endl;
		std::cout << "Contact 1 will be overwritten..." << std::endl;
	}

	std::cout << "Enter First Name:" << std::endl;
	std::getline(std::cin, input);
	if (!newContact.setFirstName(input))
		return ;

	std::cout << "Enter Last Name:" << std::endl;
	std::getline(std::cin, input);
	if (!newContact.setLastName(input))
		return ;

	std::cout << "Enter Nick Name:" << std::endl;
	std::getline(std::cin, input);
	if (!newContact.setNickName(input))
		return ;

	std::cout << "Enter Phone Number:" << std::endl;
	std::getline(std::cin, input);
	if (!newContact.setPhoneNumber(input))
		return ;

	std::cout << "Enter Darkest Secret:" << std::endl;
	std::getline(std::cin, input);
	if (!newContact.setDarkestSecret(input))
		return ;

	_contacts[_index % 8] = newContact;
	_index++;
}

void	PhoneBook::searchContact() {

}
