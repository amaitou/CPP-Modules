
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scavone   = ScavTrap();

	scavone.takeDamage(5);
	scavone.beRepaired(30);
	scavone.attack("l3do");

	ScavTrap scavtwo = ScavTrap("Warrior_3");

	scavtwo = scavone;
	scavtwo.guardGate();
	return (0);
}