#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
	protected:
		std::string type;
	
	public:
		AAnimal();
		AAnimal(std::string type);
		virtual ~AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal & operator = (const AAnimal &object);

		virtual void makeSound() = 0;
		virtual std::string getType() const;
} ;

#endif