#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string __name);
		~FragTrap();
		FragTrap(const FragTrap &_copy);
		FragTrap & operator = (const FragTrap &__object);

		void highFivesGuys(void);
} ;

#endif