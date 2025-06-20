/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/01 19:27:16 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/06/20 17:57:56 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

// SETTERS //

bool	Contact::setFirstName(std::string firstName){
	if (firstName.empty()){
		std::cout << "First Name cannot be empty!" << std::endl;
		return false;
	}
	_firstName = firstName;
	return true ;
}

bool	Contact::setLastName(std::string lastName){
	if (lastName.empty()){
		std::cout << "Last Name cannot be empty!" << std::endl;
		return false;
	}
	_lastName = lastName;
	return true ;
}

bool	Contact::setNickName(std::string nickName){
	if (nickName.empty()){
		std::cout << "Nick Name cannot be empty!" << std::endl;
		return false;
	}
	_nickName = nickName;
	return true ;
}

bool	Contact::checkPhoneNumber(std::string phoneNumber){
	for(size_t i = 0; i < phoneNumber.length(); i++){
		if (!std::isdigit(phoneNumber[i]))
			return false;
	}
	return true;
}

bool	Contact::setPhoneNumber(std::string phoneNumber){
	if (phoneNumber.empty()){
		std::cout << "Phone Number cannot be empty!" << std::endl;
		return false;
	}
	else if (!Contact::checkPhoneNumber(phoneNumber)){
		std::cout << "Phone Number can only consist digits!" << std::endl;
		return false;
	}
	else if (phoneNumber.length() > 10){
		std::cout << "Yoo this number is too long bro!" << std::endl;
		return false;
	}
	_phoneNumber = phoneNumber;
	return true ;
}

bool	Contact::setDarkestSecret(std::string darkestSecret){
	if (darkestSecret.empty()){
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

void	Contact::displayFullInfo(){
	std::cout << "First Name: " << getFirstName() << std::endl;
	std::cout << "Last Name: " << getLastName() << std::endl;
	std::cout << "Nick Name: " << getNickName() << std::endl;
	std::cout << "Phone Number: " << getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << getDarkestSecret() << std::endl;
}
