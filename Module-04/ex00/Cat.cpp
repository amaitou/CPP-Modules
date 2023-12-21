/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:02:03 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:02:04 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Minocha")
{
	std::cout << "Cat " << this->getType() << " has been created" << std::endl;
}

Cat::Cat(std::string type): Animal(type)
{
	std::cout << "Cat " << this->getType() << " has been created" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat " << this->getType() << " has been destroyed" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	this->type = copy.type;
	std::cout << "Cat " << this->getType() << " copy has been created" << std::endl;
}

Cat &Cat::operator = (const Cat &object)
{
	this->type = object.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat " << this->getType() << " is Meowing" << std::endl;
}

std::string Cat::getType() const
{
	return this->type;
}