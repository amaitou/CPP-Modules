#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int	iterator;
	Zombie *horde = new Zombie[N];
	if (!horde)
		return nullptr;
	for(iterator = 0; iterator < N; iterator++)
		horde[iterator] = Zombie(name);
	return horde;
}