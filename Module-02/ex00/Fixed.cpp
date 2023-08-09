#include "Fixed.hpp"

const int Fixed::fractional = 0;

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "The default constructor has been called" << std::endl;
}

Fixed::Fixed(int value)
{
	this->value = value;
	std::cout << "The parametarized constructor has been called" << std::endl;
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

