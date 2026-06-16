#include "Base.hpp"

int	main()
{
	for (int i = 0; i < 10; i++)
	{
		Base* obj = generate();

		identify(obj);
		identify(*obj);

		delete obj;
	}

	return (0);
}