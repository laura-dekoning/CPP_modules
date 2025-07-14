/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/07/02 16:57:33 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/07/14 15:30:55 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	invalidArgc(int argc){
	if (argc < 4)
		std::cerr << "Error: Not enough arguments!" << std::endl;
	else if (argc > 4)
		std::cerr << "Error: Too many arguments!" << std::endl;
	std::cerr << "Correct use: <filename> <s1> <s2>" << std::endl;
	return 1;
}

bool	invalidInput(char **argv){
	if (std::string(argv[1]).empty()){
		std::cerr << "Error: filename cannot be empty!" << std::endl;
		return false;
	}
	else if (std::string(argv[2]).empty()){
		std::cerr << "Error: s1 cannot be empty — there must be a target substring to replace." << std::endl;
		return false;
	}
	else if (std::string(argv[3]).empty()){
		std::cerr << "Error: s2 cannot be empty — provide a replacement string for s1." << std::endl;
		return false;
	}
	return true;
}

int	invalidFile(int flag, std::ifstream &infile){
	if (flag == 1){
		std::cerr << "Error: Could not open infile." << std::endl;
	}
	else if (flag == 2){
		infile.close();
		std::cerr << "Error: Could not create outfile." << std::endl;
	}
	return 1;
}

int	emptyString(std::ifstream &infile, std::ofstream &outfile){
	infile.close();
	outfile.close();
	std::cerr << "Error: Strings cannot be empty!" << std::endl;
	return 1;
}
