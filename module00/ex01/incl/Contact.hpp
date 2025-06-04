/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/01 19:33:16 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/06/04 18:30:19 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP


# include <string>

class	Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

	public:
		Contact();
		~Contact();

		// Setters
		bool	setFirstName(std::string firstName);
		bool	setLastName(std::string lastName);
		bool	setNickName(std::string nickName);
		bool	setPhoneNumber(std::string phoneNumber);
		bool	setDarkestSecret(std::string darkestSecret);
		
		// Getters
		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickName() const;
		std::string	getPhoneNumber() const;
		std::string	getDarkestSecret() const;

		void	displayFullInfo(int	index);
};





#endif