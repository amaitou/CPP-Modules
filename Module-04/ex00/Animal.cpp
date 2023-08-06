#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Donkey";
	std::cout << "Animal " << this->getType() << " has been created" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal " << this->getType() << " has been created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal "<< this->getType() << " has been destroyed" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	this->type = copy.type;
	std::cout << "Animal " << this->getType() << " copy has been created" << std::endl;

}

Animal &Animal::operator = (const Animal &object)
{
	this->type = object.type;
	return *this;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "Animal " << this->getType() << " is whistling" << std::endl;
}