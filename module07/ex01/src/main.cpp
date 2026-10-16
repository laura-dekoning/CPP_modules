#include "iter.hpp"
#include <string>
#include <iostream>

void	increment(int &a){
	a++;
}

void	addString(std::string &a){
	a += "!";
}

template <typename T>
void	printElem(const T &a){
	std::cout << a << std::endl;
}

int	main(void){
	int	nums[] = {1, 2, 3, 4, 5, 6};
	size_t	numsLen = sizeof(nums) / sizeof(nums[0]);

	std::cout << "--- int array voor increment ---" << std::endl;
	iter(nums, numsLen, printElem<int>);

	iter(nums, numsLen, increment);

	std::cout << "--- int array na increment ---" << std::endl;
	iter(nums, numsLen, printElem<int>);

	const int constNums[] = {10, 20, 30};
	size_t constLen = sizeof(constNums) / sizeof(constNums[0]);

	std::cout << "--- const int array ---" << std::endl;
	// iter(constNums, constLen, increment);
	iter(constNums, constLen, printElem<const int>);


	std::string words[] = {"hello", "world", "42"};
	size_t wordsLen = sizeof(words) / sizeof(words[0]);

	std::cout << "--- string array voor addString ---" << std::endl;
	iter(words, wordsLen, printElem<std::string>);

	iter(words, wordsLen, addString);

	std::cout << "--- string array na addString ---" << std::endl;
	iter(words, wordsLen, printElem<std::string>);

	std::cout << "--- lengte 0 (hieronder hoort niets te staan) ---\n" << std::endl;
	iter(nums, 0, printElem<int>);
	std::cout << "--- einde ---" << std::endl;

	return 0;
}