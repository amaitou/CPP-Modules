#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	protected:
		std::string ideas[100];
	
	public:
		Brain();
		~Brain();
		Brain(const Brain &copy);
		Brain & operator = (const Brain &object);
} ;

#endif