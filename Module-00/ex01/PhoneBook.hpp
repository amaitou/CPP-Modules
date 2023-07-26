#include "Contact.hpp"

#ifndef PHONEBOOK_H_HPP
#define PHONEBOOK_H_HPP

class PhoneBook
{
	private:
		Contact contacts[8];
		int		iterator;
		int		length;
	public :
		PhoneBook();
		void	banner();
		void	add();
		void	search();
};

#endif