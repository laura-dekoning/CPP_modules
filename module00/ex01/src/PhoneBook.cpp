/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/01 19:27:16 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/06/20 17:57:37 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : _index(0), _full(0){}
PhoneBook::~PhoneBook(){}

void	PhoneBook::addContact(){
	Contact		newContact;
	std::string	input;
	
	if (_index == 8)
	{
		std::cout << "Oh no, there is only room for 8 contacts!" << std::endl;
		std::cout << "Contact 1 will be overwritten..." << std::endl;
		_index = 0;
		_full = true;
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

	_contacts[_index] = newContact;
	_index++;
}

std::string	PhoneBook::formatString(const std::string string){
	if (string.length() > 10)
		return string.substr(0, 9) + ".";
	else
		return string;
}

void	PhoneBook::showContacts(Contact *_contacts){
	int	index;

	if (_full == true)
		index = 8;
	else
		index = _index;
	std::cout << std::right << std::setw(10) << "Index" << "|"
			<< std::right << std::setw(10) << "First Name" << "|"
			<< std::right << std::setw(10) << "Last Name" << "|"
			<< std::right << std::setw(10) << "Nick Name" << std::endl;
	std::cout << std::string(44, '-') << std::endl;  // Separator line
	for (int i = 0; i < index; i++)
	{
		std::cout << std::right << std::setw(10) << (i + 1) << "|"
				<< std::right << std::setw(10) << (formatString(_contacts[i].getFirstName())) << "|"
				<< std::right << std::setw(10) << (formatString(_contacts[i].getLastName())) << "|"
				<< std::right << std::setw(10) << (formatString(_contacts[i].getNickName())) << std::endl;
	}
}

void	PhoneBook::searchContact(){
	std::string	input;
	int			i;

	if (_index == 0 && _full != true)
	{
		std::cout << "Very sorry but contact list is empty" << std::endl;
		return ;
	}
	PhoneBook::showContacts(_contacts);
	std::cout << "\033[1m" << "Choose option (1 - 8): " << "\033[0m";
	std::getline(std::cin, input);
	try {
		i = std::stoi(input);
	} catch (const std::exception &e) {
		std::cout << "Wrong input! Choose 1 - 8" << std::endl;
		return ;
	}
	if (i < 0 || i > 8)
	{
		std::cout << "This is not a valid index..." << std::endl;
		return ;
	}
	i -= 1;
	_contacts[i].displayFullInfo();
}
