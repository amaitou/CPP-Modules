#pragma once
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string _name);
		~ScavTrap();
		ScavTrap(const ScavTrap &_copy);
		ScavTrap & operator = (const ScavTrap &_object);

		void guardGate();
} ;

