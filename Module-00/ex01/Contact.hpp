/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:49:15 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 00:49:17 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>


class Contact
{
	private:
		std::string fname;
		std::string lname;
		std::string nname;
		std::string number;
		std::string secret;
	public:

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