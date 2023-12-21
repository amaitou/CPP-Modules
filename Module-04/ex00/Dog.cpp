/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:02:10 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:02:11 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Rocky")
{
	std::cout << "Dog " << this->getType() << " has been created" << std::endl;
}

Dog::Dog(std::string type): Animal(type)
{
	std::cout << "Dog " << this->getType() << " has been created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog " << this->getType() << " has been destroyed" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	this->type = copy.type;
	std::cout << "Dog " << this->getType() << " copy has been created" << std::endl;
}

Dog &Dog::operator = (const Dog &object)
{
	this->type = object.type;
	return *this;
}

std::string Dog::getType() const
{
	return this->type;
}

void Dog::makeSound() const
{
	std::cout << "Dog " << this->getType() << " is How Howing" << std::endl;
}