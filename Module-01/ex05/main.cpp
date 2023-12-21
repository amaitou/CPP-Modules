/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:52:25 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 00:52:28 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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