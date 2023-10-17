#include "Serializer.hpp"

int main(void)
{
	Data person("amaitou", 23, 183.0, 75.2);
	uintptr_t serializedData = Serializer::serialize(&person);
	Data *deserializedData = Serializer::deserialize(serializedData);
	if (deserializedData == &person)
	{
		std::cout << "Serialization & Deserialization has been done successfully" << std::endl;
		std::cout << "Name : " << deserializedData->getName() << std::endl;
		std::cout << "Age : " << deserializedData->getAge() << std::endl;
		std::cout << "Height : " << deserializedData->getHeight() << std::endl;
		std::cout << "Pounds : " << deserializedData->getPounds() << std::endl;
		return (EXIT_SUCCESS);
	}
	else
	{
		std::cout << "Serialization & Deserialization has not been done successfully" << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
