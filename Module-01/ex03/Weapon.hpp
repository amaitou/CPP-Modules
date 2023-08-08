#include <iostream>
#include <string>

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
	private:
		std::string type;
	
	public:
		Weapon(std::string type);
		const std::string 	getType(void);
		void				setType(std::string type);
} ;

#endif