/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:01:19 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:01:20 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "FragTrap_Default";
	this->_health = FRAGTRAP_HEALTH;
	this->_energy = FRAGTRAP_ENERGY;
	this->_attack = FRAGTRAP_ATTACK;
	std::cout << "FragTrap " << this->_name << " has been created" << std::endl;
}

FragTrap::FragTrap(std::string __name)
{
	this->_name = __name;
	this->_health = FRAGTRAP_HEALTH;
	this->_energy = FRAGTRAP_ENERGY;
	this->_attack = FRAGTRAP_ATTACK;
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
	std::cout << "FragTrap " << this->_name << "did a high five" << std::endl;
}