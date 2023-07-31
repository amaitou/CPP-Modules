
#include "Harl.hpp"

int main(void)
{
	Harl harl;
	std::string level;
	do
	{
		std::cout << "Enter The Level: ";
		std::cin >> level;
		harl.complain(level);
		fflush(stdin);
		std::cin.clear();
		clearerr(stdin);
	} while (level != "exit" && level != "EXIT");
	
	return (0);
}