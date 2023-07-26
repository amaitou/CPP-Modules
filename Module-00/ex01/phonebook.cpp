#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	iterator = -1;
	length = 0;
	banner();
}

void	PhoneBook::banner()
{
	std::cout << "[*] Welcome to our Phone Book Program!" << std::endl;
	std::cout << "[?] Usuage :" << std::endl;
	std::cout << "\tADD 	: add your contact to the list contacts." << std::endl;
	std::cout << "\tSEARCH	: search for a specific contact using its index." << std::endl;
	std::cout << "\tEXIT	: exit from the program." << std::endl;
}
void	PhoneBook::add()
{
	iterator = (iterator + 1) % 8;
	if (contacts[iterator].set_fname())
	{
		iterator--;	
		return ;
	}
	if (contacts[iterator].set_lname())
	{
		iterator--;	
		return ;
	}
	if (contacts[iterator].set_nname())
	{
		iterator--;	
		return ;
	}
	if (contacts[iterator].set_number())
	{
		iterator--;	
		return ;
	}
	if (contacts[iterator].set_secret())
	{
		iterator--;	
		return ;
	}
	if (length < 8)
		length++;
}
void	PhoneBook::search()
{
	int	index;
	if (!length)
	{
		std::cout << "[!] No Contact Has Been Registered" << std::endl;
		return ;
	}
	contacts[iterator].display_by_search(contacts, length);
	std::cout << "Enter Index : ";
	std::cin >> index;
	if (!std::cin || index >= length)
	{
		std::cout  << "[!] Index Out Of Range" << std::endl;
		return ;
	}
	contacts->display_by_index(contacts[index]);
}