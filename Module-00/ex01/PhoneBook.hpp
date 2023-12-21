/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:49:39 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 00:49:40 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class PhoneBook
{
	private:
		Contact contacts[8];
		int		iterator;
		int		length;
	public:
		PhoneBook();
		void	banner();
		void	add();
		void	search();
};

#endif
