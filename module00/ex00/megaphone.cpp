/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/01 16:38:16 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/09/08 13:02:26 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; argv[i] != NULL; i++)
		{
			for (int j = 0; argv[i][j] != '\0'; j++)
				std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(argv[i][j])));
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
