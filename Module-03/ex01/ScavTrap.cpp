#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "Default";
	this->_health = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "StavTrap " << this->_name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(std::string _name)
{
	this->_name = _name;
	this->_health = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "StavTrap " << this->_name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &_object)
{
	this->_name = _object._name;
	this->_energy = _object._energy;
	this->_health = _object._health;
	this->_attack = _object._attack;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " has been destroyed" << std::endl;
}

ScavTrap &ScavTrap::operator= (const ScavTrap &_object)
{
	this->_name = _object._name;
	this->_health = _object._health;
	this->_energy = _object._energy;
	this->_attack = _object._attack;
	return *this;
}

void ScavTrap::guardGate()
{
	if (this->_health < 1)
	{
		std::cout << "ScavTrap " << this->_name << " cannot gaurd the gate since he is dead" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is now guarding the gate" << std::endl;
}