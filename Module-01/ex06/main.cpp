
#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	if (ac < 2)
	{
		std::cout << "Invalid Arguments" << std::endl;
		return (0);
	}
	std::string cppString(av[1]);
	harl.complain(av[1]);
	return (0);
}