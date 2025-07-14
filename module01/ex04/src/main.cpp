/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/07/02 11:46:03 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/07/14 15:22:51 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void	replaceString(std::ifstream &infile, std::ofstream &outfile, std::string s1, std::string s2){
	std::string	line;
	
	while (std::getline(infile, line)){
		size_t	currentPos = 0;
		while (1){
			size_t	foundPos = line.find(s1, currentPos);
			if (foundPos != std::string::npos){
				line.erase(foundPos, s1.length());
				line.insert(foundPos, s2);
				currentPos = foundPos + s2.length();
			}
			else
				break;
		}
		outfile << line << std::endl;
	}
}

int	main(int argc, char **argv){
	if (argc != 4)
		return invalidArgc(argc);
	else if (invalidInput(argv) == false)
		return 1;

	std::ifstream infile;
	infile.open(argv[1]);
	if (!infile)
		return invalidFile(1, infile);

	std::string	fileName = argv[1];
	fileName.append(".replace");

	std::ofstream outfile;
	outfile.open(fileName);
	if (!outfile)
		return invalidFile(2, infile);

	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty() || s2.empty())
		return emptyString(infile, outfile);
	
	replaceString(infile, outfile, s1, s2);

	infile.close();
	outfile.close();

	return 0;
}
