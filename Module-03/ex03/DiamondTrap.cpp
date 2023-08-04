#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_name = "DiamondTrap_Default";
	ClapTrap::_name = this->_name + "_clap_name";
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
}

DiamondTrap::DiamondTrap(std::string ___name)
{
	this->_name = ___name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
}

DiamondTrap::DiamondTrap(const DiamondTrap &___copy)
{
	this->_name = ___copy._name;
	this->_health = ___copy._health;
	this->_energy = ___copy._energy;
	this->_attack = ___copy._attack;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap's name is " << this->_name << " and ClapTrap's name is " << ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " has been destroyed" << std::endl;
}