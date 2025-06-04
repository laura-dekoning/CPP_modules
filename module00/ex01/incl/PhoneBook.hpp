/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/01 19:33:16 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/06/04 18:26:53 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include "Contact.hpp"


class	PhoneBook
{
	private:
		Contact	_contacts[8];
		int			_index;

	public:
		PhoneBook();
		~PhoneBook();

		void	addContact();
		void	searchContact();
		void	showContacts();

};



#endif