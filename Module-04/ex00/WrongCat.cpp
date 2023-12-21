/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:03:09 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:03:10 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("Rocky")
{
	std::cout << "WrongCat " << this->type << " has been created" << std::endl;
}

WrongCat::WrongCat(std::string type): WrongAnimal(type)
{
	std::cout << "WrongCat " << this->type << " has been created" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat " << this->type << " has been destroyed" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	this->type = copy.type;
	std::cout << "WrongCat " << this->type << " copy has been created" << std::endl;
}

WrongCat &WrongCat::operator = (const WrongCat &object)
{
	this->type = object.type;
	return *this;
}

std::string WrongCat::getType() const
{
	return this->type;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat " << this->getType() << " is Wronging too" << std::endl;
}