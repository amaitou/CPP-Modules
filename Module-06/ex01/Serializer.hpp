#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <cinttypes>
#include "Data.hpp"

class Serializer
{
	public:
		Serializer();
		~Serializer();
		Serializer(const Serializer &copy);
		Serializer & operator = (const Serializer &object);

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
