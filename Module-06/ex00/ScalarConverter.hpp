#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

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

		static void		toInteger(std::string _string);
		static void		toCharacter(std::string _string);
		static void		toFloat(std::string _string);
		static void		toDouble(std::string _string);
		
		static void		printValues(std::string _string);
};

#endif