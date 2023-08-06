#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* animal = new Animal("Monkey");
	const Animal* dog = new Dog("charlie");
	const Animal* cat = new Cat("Luna");

	std::cout << animal->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	
	dog->makeSound();
	cat->makeSound();
	animal->makeSound();

	delete cat;
	delete dog;
	delete animal;
	return 0;
}