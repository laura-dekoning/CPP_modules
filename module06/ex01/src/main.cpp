#include "Serializer.hpp"

int	main()
{
	Data	stack{12, "doei"};
	Data	*heap = new Data{12, "doei"};
{
	Data	*data1 = &stack;
	Data	*dataPtr = Serializer::deserialize(Serializer::serialize(data1));

	if (data1 == dataPtr &&	*data1 == *dataPtr)
		std::cout << "Jeej\n";
	else
		std::cout << "Ohno\n";
	std::cout << data1 << "\n";
	std::cout << dataPtr << "\n";
}
{	Data	*data1 = heap;
	Data	*dataPtr = Serializer::deserialize(Serializer::serialize(data1));

	if (data1 == dataPtr &&	*data1 == *dataPtr)
		std::cout << "Jeej\n";
	else
		std::cout << "Ohno\n";
	std::cout << data1 << "\n";
	std::cout << dataPtr << "\n";
}
}