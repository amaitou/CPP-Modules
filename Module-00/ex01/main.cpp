
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook book;
	std::string command;

	while (1)
	{
		std::cout << "\nEnter Your Command : ";
		std::cin >> command;
		if (command == "EXIT")
			break;
		else if (command == "ADD")
			book.add();
		else if (command == "SEARCH")
			book.search();
		else
			std::cout << "\n[!] Invalid Command, Try Again !" << "\n";
		std::cin.clear();
		clearerr(stdin);
	}
	return (0);
}
