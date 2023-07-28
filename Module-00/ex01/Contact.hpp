
#include <iostream>
#include <string>
#include <iomanip>

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
	public:
		std::string fname;
		std::string lname;
		std::string nname;
		std::string number;
		std::string secret;

		int	set_fname(void);
		int	set_lname(void);
		int	set_nname(void);
		int	set_number(void);
		int	set_secret(void);
		void	string_width(std::string property);
		void 	display_by_search(Contact *contact, int number);
		void	display_by_index(Contact contact);

};

#endif