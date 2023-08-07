#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "[.] Creating AAnimal array and Calling Constructors\n" << std::endl;
	AAnimal *AAnimal[20];
	int	i = 0;

	std::cout << std::endl;
	std::cout << "[.] Filling the array" << std::endl;
	std::cout << std::endl;
	
	while (i < 20)
	{
		if (i < 10)
			AAnimal[i] = new Dog();
		else
			AAnimal[i] = new Cat();
		++i;
	}

	std::cout << std::endl;
	std::cout << "[.] Displaying Sounds\n" << std::endl;

	i = 0;
	while (i < 20)
	{
		AAnimal[i]->makeSound();
		++i;
	}

	std::cout << std::endl;
	std::cout << "[.] Calling Destructors\n" << std::endl;

	i = 0;
	while (i < 20)
	{
		delete AAnimal[i];
		++i;
	}
	return 0;
}