#include "Contact.hpp"

int	Contact::set_fname(void)
{
	std::string	fname;
	std::cout << "[+] First Name: ";
	std::cin >> fname;
	if (!fname.length())
		return 1 ;
	this->fname = fname;
	return 0;
}

int	Contact::set_lname(void)
{
	std::string	lname;
	std::cout << "[+] Last Name: ";
	std::cin >> lname;
	if (!lname.length())
		return 2 ;
	this->lname = lname;
	return 0;
}
int	Contact::set_nname(void)
{
	std::string	nname;
	std::cout << "[+] Nickname: ";
	std::cin >> nname;
	if (!nname.length())
		return 3 ;
	this->nname = nname;
	return 0;
}
int	Contact::set_number(void)
{
	std::string	number;
	std::cout << "[+] Number: ";
	std::cin >> number;
	if (!number.length())
		return 4 ;
	this->number = number;
	return 0;
}
int	Contact::set_secret(void)
{
	std::string	secret;
	std::cout << "[+] Secret: ";
	std::cin >> secret;
	if (!secret.length())
		return 5 ;
	this->secret = secret;
	return 0;
}

void	Contact::string_width(std::string property)
{
	if (property.length() >= 10)
		std::cout << property.substr(0,9) << "." << "|";
	else
		std::cout << std::right << std::setw(10) << property << "|";
}

void	Contact::display_by_search(Contact *contact, int number)
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
void	Contact::display_by_index(Contact contact)
{
	std::cout << "[-] First Name		: " << contact.fname << std::endl;
	std::cout << "[-] Last Name		: " << contact.lname << std::endl;
	std::cout << "[-] Nickname		: " << contact.nname << std::endl;
	std::cout << "[-] Phone Number	: " << contact.number << std::endl;
	std::cout << "[-] Darkest Secret	: " << contact.secret << std::endl;
	std::cout << std::endl;
}