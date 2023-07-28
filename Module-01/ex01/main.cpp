#include "Zombie.hpp"

int main(void)
{
	int	n;
	std::string	name;
	int iterator;

	n = 20;
	name = "ZombieHorde";
	Zombie	*horde = zombieHorde(n, name);
	iterator = 0;
	while (iterator < n)
	{
		std::cout << "[" << iterator << "] ";
		horde[iterator].announce();
		iterator++;
	}
	delete[] horde;
}