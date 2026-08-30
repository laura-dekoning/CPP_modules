#include "Serializer.hpp"

int	main()
{
	Data stack{12, "doei"};
	Data* heap = new Data{42, "hallo"};

	Data* data1 = &stack;

	uintptr_t raw = Serializer::serialize(data1);
	Data* dataPtr = Serializer::deserialize(raw);

	std::cout << "Stack:\n";
	std::cout << "original:   " << data1 << "\n";
	std::cout << "serialized: " << raw << "\n";
	std::cout << "restored:   " << dataPtr << "\n";

	if (data1 == dataPtr && *data1 == *dataPtr)
		std::cout << "Jeej\n";
	else
		std::cout << "Ohno\n";

	std::cout << "\n";

	data1 = heap;

	raw = Serializer::serialize(data1);
	dataPtr = Serializer::deserialize(raw);

	std::cout << "Heap:\n";
	std::cout << "original:   " << data1 << "\n";
	std::cout << "serialized: " << raw << "\n";
	std::cout << "restored:   " << dataPtr << "\n";

	if (data1 == dataPtr && *data1 == *dataPtr)
		std::cout << "Jeej\n";
	else
		std::cout << "Ohno\n";

	delete heap;
}