/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/11 12:22:03 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/15 15:28:49 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain();
		Brain(const Brain& copy);
		~Brain();

		Brain&	operator=(const Brain &copy);

		const std::string*	getIdeas() const;
		void				setIdea(int i, const std::string idea);
};



#endif