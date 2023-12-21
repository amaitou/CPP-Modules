/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:49:24 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 00:49:26 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
