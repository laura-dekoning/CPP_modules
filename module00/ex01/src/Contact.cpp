/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/01 19:27:16 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/06/04 18:36:15 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

Contact::Contact() {std::cout << "Contact constructed" << std::endl;}
Contact::~Contact() {std::cout << "Contact deconstructed" << std::endl;}

// SETTERS //

bool	Contact::setFirstName(std::string firstName) {
	if (firstName.empty())
	{
		std::cout << "First Name cannot be empty!" << std::endl;
		return false;
	}
	_firstName = firstName;
	return true ;
}

bool	Contact::setLastName(std::string lastName) {
	if (lastName.empty())
	{
		std::cout << "Last Name cannot be empty!" << std::endl;
		return false;
	}
	_lastName = lastName;
	return true ;
}

bool	Contact::setNickName(std::string nickName) {
	if (nickName.empty())
	{
		std::cout << "Nick Name cannot be empty!" << std::endl;
		return false;
	}
	_nickName = nickName;
	return true ;
}

bool	Contact::setPhoneNumber(std::string phoneNumber) {
	if (phoneNumber.empty())
	{
		std::cout << "Phone Number cannot be empty!" << std::endl;
		return false;
	}
	_phoneNumber = phoneNumber;
	return true ;
}

bool	Contact::setDarkestSecret(std::string darkestSecret) {
	if (darkestSecret.empty())
	{
		std::cout << "Darkest Secret cannot be empty!" << std::endl;
		return false;
	}
	_darkestSecret = darkestSecret;
	return true ;
}

// GETTERS //

std::string	Contact::getFirstName() const {
	return _firstName;
}

std::string	Contact::getLastName() const {
	return _lastName;
}

std::string	Contact::getNickName() const {
	return _nickName;
}

std::string	Contact::getPhoneNumber() const {
	return _phoneNumber;
}

std::string	Contact::getDarkestSecret() const {
	return _darkestSecret;
}

void	Contact::displayFullInfo(int index) {
	std::string	first, last, nick, phone, secret;

	if (index < 0 || index > 7)
	{
		std::cout << "Thid is not a valid index..." << std::endl;
		return ;
	}
	first = getFirstName();
	last = getLastName();
	nick = getNickName();
	phone = getPhoneNumber();
	secret = getDarkestSecret();
	std::cout
}