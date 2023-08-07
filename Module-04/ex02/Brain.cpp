#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor of Brain was called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Destructor of Brain was called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = copy.ideas[i];
		++i;
	}
}

Brain &Brain::operator = (const Brain &object)
{
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = object.ideas[i];
		++i;
	}
	return *this;
}