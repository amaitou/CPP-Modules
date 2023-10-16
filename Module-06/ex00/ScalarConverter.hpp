#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class ScalarConverter
{
    private:
        std::string _str;
        int _integer;
        float   _float;
        double  _double;
        char    _character;
    public:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter & operator = (const ScalarConverter &object);

        std::string getString(void) const;
        int         getInteger(void) const;
        float       getFloat(void) const;
        char        getCharacter(void) const;
        double      getDouble(void) const;

        void        setString(std::string string);
        void        setInteger(int _integer);
        void        setFloat(float _float);
        void        setDouble(double _double);
        void        setCharacter(char c);

        bool        checkPsuedoLiterals(void) const;
        bool        checkCharacter(void) const;
        bool        checkInteger(void) const;
        bool        checkFloat(void) const;
};

#endif