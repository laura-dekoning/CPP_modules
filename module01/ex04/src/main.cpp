

#include "sed.hpp"



void	error_message(int argc){
	if (argc < 4)
		std::cerr << "Error: Not enough arguments!" << std::endl;
	else if (argc > 4)
		std::cerr << "Error: Too many arguments!" << std::endl;
	std::cerr << "Correct use: <filename> <s1> <s2>" << std::endl;
}


int	main(int argc, char **argv){

	if (argc != 4){
		error_message(argc);
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.emtpy()){
		std::cerr << "Error: s1 cannot be empty, we have to replace something." << std::endl;
		return 1;
	}
	std::ifstream infile(filename);
	if (!infile){
		std::cerr << "Error: Could not open input file." << std::endl;
		return 1;
	}
	
}