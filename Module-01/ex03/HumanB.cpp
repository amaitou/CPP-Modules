#include "HumanB.hpp"

void	HumanB::attack(void)
{
	std::cout << "HumanB " << "attack with their "
		<< weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}