#include "Dog.hpp"

Dog::Dog(): Animal("Rocky")
{
	std::cout << "Dog " << this->type << " has been created" << std::endl;
}

Dog::Dog(std::string type): Animal(type)
{
	std::cout << "Dog " << this->type << " has been created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog " << this->type << " has been destroyed" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	this->type = copy.type;
	std::cout << "Dog " << this->type << " copy has been created" << std::endl;
}

Dog &Dog::operator = (const Dog &object)
{
	this->type = object.type;
	return *this;
}

std::string Dog::getType() const
{
	return this->type;
}

void Dog::makeSound() const
{
	std::cout << "Dog " << this->type << " is How Howing" << std::endl;
}