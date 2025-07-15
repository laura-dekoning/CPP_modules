/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/07/14 15:51:12 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/07/15 16:32:51 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARLFILTER_HPP
# define HARLFILTER_HPP

# include <string>
# include <iostream>

class Harl
{
	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);

	public:
		void	complain(std::string level);
};

enum Level
{ 
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	INVALID
};

typedef void	(Harl::*HarlFunc)();

#endif