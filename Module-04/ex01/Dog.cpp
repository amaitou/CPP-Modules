#include "Dog.hpp"

Dog::Dog(): Animal("Rocky")
{
	this->d_brain = new Brain();
	std::cout << "Dog " << this->getType() << " has been created" << std::endl;
}

Dog::Dog(std::string type): Animal(type)
{
	this->d_brain = new Brain();
	std::cout << "Dog " << this->getType() << " has been created" << std::endl;
}

Dog::~Dog()
{
	delete this->d_brain;
	std::cout << "Dog " << this->getType() << " has been destroyed" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	this->type = copy.type;
	this->d_brain = new Brain();
	std::cout << "Dog " << this->getType() << " copy has been created" << std::endl;
}

Dog &Dog::operator = (const Dog &object)
{
	this->type = object.type;
	this->d_brain = new Brain();
	return *this;
}

std::string Dog::getType() const
{
	return this->type;
}

void Dog::makeSound() const
{
	std::cout << "Dog " << this->getType() << " is How Howing" << std::endl;
}