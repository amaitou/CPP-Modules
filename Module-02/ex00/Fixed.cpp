/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:54:23 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 00:54:24 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 0;

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "The default constructor has been called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	this->value = copy.value;
	std::cout << "The copy constructor has been called" << std::endl;
}

Fixed &Fixed::operator = (const Fixed &object)
{
	this->value = object.value;
	std::cout << "The copy assignment operator has been called" << std::endl;
	return *this;
}

Fixed::~Fixed() 
{
	std::cout << "The destructor has been called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "The \"getRawbits()\" member function has been called" << std::endl;
	return this->value;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "The \"setRawBits()\" member function has been called" << std::endl;
	this->value = raw;
}

