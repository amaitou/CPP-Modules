
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapone   = ClapTrap();
	ClapTrap claptwo   = ClapTrap("Warrior_1");

	clapone.takeDamage(5);
	clapone.beRepaired(30);
	clapone.attack("l3do");

	claptwo.attack("l3do_2");
	claptwo.takeDamage(10);
	claptwo.beRepaired(50);

	ClapTrap clapthree = ClapTrap("Warrior_3");

	clapthree = clapthree;
	clapthree.attack("l3do_3");
	clapthree.takeDamage(4);
	clapthree.beRepaired(20);
	return (0);
}