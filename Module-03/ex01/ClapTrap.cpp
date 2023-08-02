#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Warrior_0"), _health(10), _energy(10), _attack(0)
{
	std::cout << "StavTrap " << this->_name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _health(10), _energy(10), _attack(0)
{
	std::cout << "StavTrap " << this->_name << " has been created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "StavTrap " << this->_name << " has been destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &object)
{
	this->_name = object._name;
	this->_health = object._health;
	this->_energy = object._energy;
	this->_attack = object._attack;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->_name = copy._name;
	this->_attack = copy._attack;
	this->_energy = copy._energy;
	this->_health = copy._health;
	std::cout << "StavTrap " << this->_name << " copy has been created" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_health < 1)
		std::cout << "StavTrap " << this->_name << " cannot attack because he is dead" << std::endl;
	else if (this->_attack < 1)
	{
		std::cout << "StavTrap " << this->_name << " cannot attack because he run out of power" << std::endl;
		return ;
	}
	std::cout << "StavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage" << std::endl;
	this->_energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_health < 1)
	{
		std::cout << "StavTrap " << this->_name <<  " cannot take damage because he is dead" << std::endl;
		return ;
	}
	if (amount > this->_health)
		amount = this->_health;
	this->_health -= amount;
	if (this->_health > 0)
	{
		std::cout << "StavTrap " << this->_name <<  " has taken " << amount << " of damage" << std::endl;
		return ;
	}
	if (this->_health == 0)
		std::cout << "StavTrap " << this->_name << " has taken " << amount << " of damage and died" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_health < 1)
	{
		std::cout << "StavTrap " << this->_name << " cannot repair himself since he died" << std::endl;
		return ;
	}
	if (this->_energy < 1)
	{
		std::cout << "StavTrap " << this->_name << " cannot repair himself since he has no energy left" << std::endl;
		return ;
	}
	this->_health += amount;
	std::cout << "StavTrap " << this->_name << " repairs " << amount << " of health" << std::endl;
	this->_energy--;
}