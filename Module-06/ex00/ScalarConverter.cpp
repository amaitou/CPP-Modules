
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    this->_character = '\0';
    this->_integer = 0;
    this->_float = 0.0f;
    this->_double = 0.0;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    *this = copy;
}

ScalarConverter &ScalarConverter::operator = (const ScalarConverter &object)
{
    this->_character = object._character;
    this->_integer = object._integer;
    this->_float = object._float;
    this->_double = object._double;
    return (*this);
}

void    ScalarConverter::setString(std::string _str)
{
    this->_str = _str;
}

void    ScalarConverter::setInteger(int _integer)
{
    this->_integer = _integer;
}

void    ScalarConverter::setFloat(float _float)
{
    this->_float = _float;
}

void    ScalarConverter::setDouble(double _double)
{
    this->_double = _double;
}

void    ScalarConverter::setCharacter(char _character)
{
    this->_character = _character;
}

std::string ScalarConverter::getString(void) const
{
    return (this->_str);
}

int     ScalarConverter::getInteger(void) const
{
    return (this->_integer);
}

float   ScalarConverter::getFloat(void) const
{
    return (this->_float);
}

char    ScalarConverter::getCharacter(void) const
{
    return (this->_character);
}

bool ScalarConverter::checkPsuedoLiterals(void) const
{
    if (this->getString() == "nan" || this->getString() == "nanf"
        || this->getString() == "-inf" || this->getString() == "-inff"
        || this->getString() == "+inff" || this->getString() == "+inf")
        return (true);
    return (false);
}

bool ScalarConverter::checkCharacter(void) const
{
    if (this->getString().length() > 1
        || (this->getString()[0] || isalpha(this->getString()[0])
        || isprint(this->getString()[0])))
        return (false);
    return (true);
}

bool ScalarConverter::checkInteger(void) const
{
    size_t  i;

    i = 0;
    if (this->getString()[0] && (this->getString()[0] == '-' || this->getString()[0] == '+'))
        ++i;
    while (i < this->getString().length())
    {
        if (!isdigit(this->getString()[i]))
            return (false);
        ++i;
    }
    return (true);
}

bool ScalarConverter::checkFloat(void) const
{
    size_t  i;
    size_t  found_commas;
    i = 0;
    if (this->getString()[0] && (this->getString()[0] == '-' || this->getString()[0] == '+'))
        ++i;
}