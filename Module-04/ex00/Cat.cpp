#include "Cat.hpp"

Cat::Cat(): Animal("Minocha")
{
	std::cout << "Cat " << this->type << " has been created" << std::endl;
}

Cat::Cat(std::string type): Animal(type)
{
	std::cout << "Cat " << this->type << " has been created" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat " << this->type << " has been destroyed" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	this->type = copy.type;
	std::cout << "Cat " << this->type << " copy has been created" << std::endl;
}

Cat &Cat::operator = (const Cat &object)
{
	this->type = object.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat " << this->type << " is Meowing" << std::endl;
}

std::string Cat::getType() const
{
	return this->type;
}