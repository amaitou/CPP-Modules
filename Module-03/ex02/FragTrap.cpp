#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "FragTrap_Default";
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "FragTrap " << this->_name << " has been created" << std::endl;
}

FragTrap::FragTrap(std::string __name)
{
	this->_name = __name;
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "FragTrap " << this->_name << " has been created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &__copy)
{
	this->_name = __copy._name;
	this->_energy = __copy._energy;
	this->_health = __copy._health;
	this->_attack = __copy._attack;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " has been destroyed" << std::endl;
}

FragTrap &FragTrap::operator= (const FragTrap &__object)
{
	this->_name = __object._name;
	this->_health = __object._health;
	this->_energy = __object._energy;
	this->_attack = __object._attack;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " did a high five" << std::endl;
}