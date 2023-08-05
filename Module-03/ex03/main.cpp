#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond("Diamond_warrior");

	diamond.attack("l3do");
	diamond.beRepaired(30);
	diamond.whoAmI();

	return (0);
}
