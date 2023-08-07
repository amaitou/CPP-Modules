#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal " << this->type << " has been created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << "WrongAnimal " << this->type << " has been created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal " << this->type << " has been destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	this->type = copy.type;
	std::cout << "WrongAnimal " << this->type << " copy has been created" << std::endl;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &object)
{
	this->type = object.type;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound()
{
	std::cout << "WrongAnimal " << this->getType() << " is Wronging" << std::endl;
}