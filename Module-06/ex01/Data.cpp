#include "Data.hpp"

Data::Data()
{
	this->name = "DefaultName";
	this->age = 23;
	this->height = 1.83;
	this->pounds = 75.5;
}

Data::Data(std::string name, int age, float height, float pounds)
{
	this->name = name;
	this->age = age;
	this->height = height;
	this->pounds = pounds;
}

Data::~Data() {}

Data::Data(const Data &copy)
{
	*this = copy;
}

Data &Data::operator = (const Data &object)
{
	this->name = object.name;
	this->age = object.age;
	this->height = object.height;
	this->pounds = object.pounds;
	return (*this);
}

std::string Data::getName(void) const
{
	return (this->name);
}

int Data::getAge(void) const 
{
	return (this->age);
}

float Data::getHeight(void) const
{
	return (this->height);
}

float Data::getPounds(void) const
{
	return (this->pounds);
}

void Data::setName(std::string name)
{
	this->name = name;
}

void Data::setAge(int age)
{
	this->age = age;
}

void Data::setHeight(float height)
{
	this->height = height;
}

void Data::setPounds(float pounds)
{
	this->pounds = pounds;
}
