#include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "The default constructor has been called" << std::endl;
}

Fixed::Fixed(const int _value): value(_value << fractional)
{
	std::cout << "Int constructor has been called" << std::endl;
}

Fixed::Fixed(const float _value): value(roundf(_value * (1 << fractional)))
{
	std::cout << "Float constructor has been called" << std::endl;
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

std::ostream    &operator<<(std::ostream &os, Fixed const &object)
{
    return (os << object.toFloat());
}

int Fixed::toInt(void) const
{
	return this->value >> fractional;
}

float Fixed::toFloat(void) const
{
	return (float)this->value / (float)(1 << fractional);
}

bool Fixed::operator > (const Fixed &object) const
{
	return this->getRawBits() > object.getRawBits();
}

bool Fixed::operator < (const Fixed &object) const
{
	return this->getRawBits() < object.getRawBits();
}

bool Fixed::operator <= (const Fixed &object) const
{
	return this->getRawBits() <= object.getRawBits();
}

bool Fixed::operator >= (const Fixed &object) const
{
	return this->getRawBits() >= object.getRawBits();
}

bool Fixed::operator == (const Fixed &object) const
{
	return this->getRawBits() == object.getRawBits();
}

bool Fixed::operator != (const Fixed &object) const
{
	return this->getRawBits() != object.getRawBits();
}

Fixed Fixed::operator + (const Fixed &object) const
{
	return Fixed(this->toFloat() + object.toFloat());
}

Fixed Fixed::operator - (const Fixed &object) const
{
	return Fixed(this->toFloat() - object.toFloat());
}

Fixed Fixed::operator * (const Fixed &object) const
{
	return Fixed(this->toFloat() * object.toFloat());
}

Fixed Fixed::operator / (const Fixed &object) const
{
	return Fixed(this->toFloat() / object.toFloat());
}

Fixed Fixed::operator ++ (int)
{
	Fixed temp(*this);
	++value;
	return temp;
}

Fixed Fixed::operator -- (int)
{
	Fixed temp(*this);
	--value;
	return temp;
}

Fixed & Fixed::operator ++ ()
{
	value++;
	return *this;
}

Fixed & Fixed::operator -- ()
{
	value--;
	return *this;
}

Fixed & Fixed::min(Fixed &object1, Fixed &object2)
{
	if (object1 <= object2)
		return object1;
	return object2;
}

Fixed & Fixed::max(Fixed &object1, Fixed &object2)
{
	if (object1 >= object2)
		return object1;
	return object2;
}

const Fixed & Fixed::min(const Fixed &object1, const Fixed &object2)
{
	if (object1 <= object2)
		return object1;
	return object2;
}

const Fixed & Fixed::max(const Fixed &object1, const Fixed &object2)
{
	if (object1 >= object2)
		return object1;
	return object2;
}