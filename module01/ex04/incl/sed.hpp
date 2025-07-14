/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sed.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/07/02 16:46:43 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/07/14 15:20:04 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <string>
# include <iostream>
# include <fstream>

int		invalidArgc(int argc);
bool	invalidInput(char **argv);
int		invalidFile(int flag, std::ifstream &infile);
int		emptyString(std::ifstream &infile, std::ofstream &outfile);

#endif