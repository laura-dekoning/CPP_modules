/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/01 19:33:16 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/09/22 16:22:59 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iomanip>  // For std::setw
# include "Contact.hpp"


class	PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_index;
		bool	_full;

	public:
		PhoneBook();
		~PhoneBook();

		void		addContact();
		void		searchContact();
		void		showContacts(Contact *_contacts);
		std::string	formatString(const std::string string);

		int			getIndex() const;
		int			getFull() const;
};



#endif