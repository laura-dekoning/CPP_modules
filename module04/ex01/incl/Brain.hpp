/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/11 12:22:03 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/11 12:34:59 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain(Brain& copy);
		~Brain();

		Brain&	operator=(const Brain &copy);

		std::string*	getIdeas() const;
};



#endif