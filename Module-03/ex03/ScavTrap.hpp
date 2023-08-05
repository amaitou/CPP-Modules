#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#define SCAVTRAP_HEALTH 100
#define SCAVTRAP_ENERGY 50
#define SCAVTRAP_ATTACK 20

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string _name);
		~ScavTrap();
		ScavTrap(const ScavTrap &_copy);
		ScavTrap & operator = (const ScavTrap &_object);

		void	attack(const std::string& target);
		void	guardGate();
} ;

#endif