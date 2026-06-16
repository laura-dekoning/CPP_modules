#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <string>
#include <cstdint>
#include <iostream>


struct Data
{
	int			i;
	std::string	str;

	bool	operator==(Data &other);
};


class Serializer
{
private:
	Serializer() = default;
	Serializer(Serializer& other) = default;

public:
	~Serializer();
	Serializer&	operator=(Serializer& other);

	static uintptr_t	serialize(Data* ptr);
	static Data* 		deserialize(uintptr_t raw);
};




#endif