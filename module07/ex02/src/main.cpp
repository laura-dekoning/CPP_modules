#include "Array.hpp"
#include <iostream>
#include <string>

template <typename T>
void	printArray(const Array<T> &arr)
{
	for (unsigned int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

int	main(void)
{
	std::cout << "--- empty array ---" << std::endl;
	Array<int> empty;
	std::cout << "size: " << empty.size() << std::endl;
	try{
		std::cout << empty[0] << std::endl;
	}
	catch (std::exception &e){
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "--- Array<int>(5) default ---" << std::endl;
	Array<int>	a(5);
	std::cout << "size: " << a.size() << std::endl;
	printArray(a);

	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = i * 10;
	std::cout << "--- filled array --" << std::endl;
	printArray(a);

	std::cout << "--- copy constructor ---" << std::endl;
	Array<int> b(a);
	a[0] = 999;
	std::cout << "a: ";
	printArray(a);
	std::cout << "b: ";
	printArray(b);

	std::cout << "--- assignment operator ---" << std::endl;
	Array<int> c;
	c = a;
	c[1] = -1;
	std::cout << "a: ";
	printArray(a);
	std::cout << "c: ";
	printArray(c);

	std::cout << "--- self-assignment ---" << std::endl;
	Array<int> &ref = a;
	a = ref;
	printArray(a);

	std::cout << "--- out of bounds ---" << std::endl;
	try
	{
		a[5] = 42;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try
	{
		a[-1] = 42; //-1 kan niet want unsigned.
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "--- Array<std::string> ---" << std::endl;
	Array<std::string> s(3);
	s[0] = "hello";
	s[1] = "world";
	s[2] = "42";
	std::cout << "size: " << s.size() << std::endl;
	printArray(s);

	std::cout << "--- const Array ---" << std::endl;
	const Array<int> ca(a);
	std::cout << "ca[0]: " << ca[0] << std::endl;
	// ca[0] = 1; // compileert niet: const Array mag niet gewijzigd worden

	return 0;
}