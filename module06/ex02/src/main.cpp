#include "Base.hpp"

int	main()
{
	A a;
	B b;
	C c;

	Base* ptr;

	ptr = &a;
	identify(ptr);
	identify(*ptr);

	ptr = &b;
	identify(ptr);
	identify(*ptr);

	ptr = &c;
	identify(ptr);
	identify(*ptr);

	std::cout << "\n";

	for (int i = 0; i < 10; i++)
	{
		Base* obj = generate();

		std::cout << "Pointer:   ";
		identify(obj);

		std::cout << "Reference: ";
		identify(*obj);

		delete obj;
		std::cout << "\n";
	}

	return (0);
}