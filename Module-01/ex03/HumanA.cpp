#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << "HumanA " << "attack with their "
		<< weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}