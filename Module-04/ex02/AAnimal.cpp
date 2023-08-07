#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->type = "Donkey";
	std::cout << "AAnimal " << this->getType() << " has been created" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	this->type = type;
	std::cout << "AAnimal " << this->getType() << " has been created" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal "<< this->getType() << " has been destroyed" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	this->type = copy.type;
	std::cout << "AAnimal " << this->getType() << " copy has been created" << std::endl;

}

AAnimal &AAnimal::operator = (const AAnimal &object)
{
	this->type = object.type;
	return *this;
}

std::string AAnimal::getType() const
{
	return this->type;
}

void AAnimal::makeSound()
{
	std::cout << "AAnimal " << this->getType() << " is whistling" << std::endl;
}