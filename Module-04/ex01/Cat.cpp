#include "Cat.hpp"

Cat::Cat(): Animal("Minocha")
{
	this->c_brain = new Brain();
	std::cout << "Cat " << this->getType() << " has been created" << std::endl;
}

Cat::Cat(std::string type): Animal(type)
{
	this->c_brain = new Brain();
	std::cout << "Cat " << this->getType() << " has been created" << std::endl;
}

Cat::~Cat()
{
	delete this->c_brain;
	std::cout << "Cat " << this->getType() << " has been destroyed" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	this->type = copy.type;
	std::cout << "Cat " << this->getType() << " copy has been created" << std::endl;
}

Cat &Cat::operator = (const Cat &object)
{
	this->type = object.type;
	this->c_brain = new Brain();
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat " << this->getType() << " is Meowing" << std::endl;
}

std::string Cat::getType() const
{
	return this->type;
}