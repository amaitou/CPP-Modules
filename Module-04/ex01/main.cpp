#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "[.] Allocating Animals and Calling Constructors\n" << std::endl;
	Animal *animal[20];
	int	i = 0;

	std::cout << std::endl;
	std::cout << "[.] Filling the array" << std::endl;
	std::cout << std::endl;
	
	while (i < 20)
	{
		if (i < 10)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
		++i;
	}

	std::cout << std::endl;
	std::cout << "[.] Displaying Sounds\n" << std::endl;

	i = 0;
	while (i < 20)
	{
		animal[i]->makeSound();
		++i;
	}

	std::cout << std::endl;
	std::cout << "[.] Calling Destructors\n" << std::endl;

	i = 0;
	while (i < 20)
	{
		delete animal[i];
		++i;
	}
	return 0;
}