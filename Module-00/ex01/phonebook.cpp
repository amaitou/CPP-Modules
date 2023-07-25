
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>

class Contact
{
	public:
		std::string fname;
		std::string lname;
		std::string nname;
		std::string number;
		std::string secret;
		
		void	set_fname(Contact contact)
		{
			std::string	fname;
			std::cout << "[+] First Name: ";
			std::cin >> fname;
			this->fname = fname;
		}
		void	set_lname(Contact contact)
		{
			std::string	lname;
			std::cout << "[+] Last Name: ";
			std::cin >> lname;
			this->lname = lname;
		}
		void	set_nname(Contact contact)
		{
			std::string	nname;
			std::cout << "[+] Nickname: ";
			std::cin >> nname;
			this->nname = nname;
		}
		void	set_number(Contact contact)
		{
			std::string	number;
			std::cout << "[+] Number: ";
			std::cin >> number;
			this->number = number;
		}
		void	set_secret(Contact contact)
		{
			std::string	secret;
			std::cout << "[+] Secret: ";
			std::cin >> secret;
			this->secret = secret;
		}

		void	string_width(std::string property)
		{
			if (property.length() >= 10)
				std::cout << property.substr(0,9) << "." << "|";
			else
				std::cout << std::right << std::setw(10) << property << "|";
		}

		void display_by_search(Contact *contact, int number)
		{
			int	i = 0;
			while (i < number)
			{
				std::cout << i << "|";
				string_width(contact[i].fname);
				string_width(contact[i].lname);
				string_width(contact[i].nname);
				std::cout << std::endl;
				++i;
			}
		}
		void	display_by_index(Contact contact)
		{
			std::cout << "[-] First Name		: " << contact.fname << std::endl;
			std::cout << "[-] Last Name		: " << contact.lname << std::endl;
			std::cout << "[-] Nickname		: " << contact.nname << std::endl;
			std::cout << "[-] Phone Number	: " << contact.number << std::endl;
			std::cout << "[-] Darkest Secret	: " << contact.secret << std::endl;
			std::cout << std::endl;
		}
};

class PhoneBook
{
	private:
		Contact contacts[8];
		int		iterator;
		int		length;
	public:
		PhoneBook()
		{
			iterator = -1;
			length = 0;
			banner();
		}
		void	banner()
		{
			std::cout << "[*] Welcome to our Phone Book Program!" << std::endl;
			std::cout << "[?] Usuage :" << std::endl;
			std::cout << "\tADD 	: add your contact to the list contacts." << std::endl;
			std::cout << "\tSEARCH	: search for a specific contact using its index." << std::endl;
			std::cout << "\tEXIT	: exit from the program." << std::endl;
		}
		void	add()
		{
			iterator = (iterator + 1) % 8;
			contacts[iterator].set_fname(contacts[iterator]);
			contacts[iterator].set_lname(contacts[iterator]);
			contacts[iterator].set_nname(contacts[iterator]);
			contacts[iterator].set_number(contacts[iterator]);
			contacts[iterator].set_secret(contacts[iterator]);
			if (length < 8)
				length++;
		}
		void	search()
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
			if (index >= length)
			{
				std::cout  << "[!] Index Out Of Range" << std::endl;
				return ;
			}
			contacts->display_by_index(contacts[index]);
			std::cin.clear();
			clearerr(stdin);
		}
};

int main(void)
{
	PhoneBook book;
	std::string command;

	while (1)
	{
		std::cout << "Enter Your Command : ";
		std::cin >> command;
		if (command == "EXIT")
			break;
		else if (command == "ADD")
			book.add();
		else if (command == "SEARCH")
			book.search();
		else
			std::cout << "[!] Invalid Command, Try Again !" << std::endl;
		std::cin.clear();
		clearerr(stdin);
	}
	return (0);
}