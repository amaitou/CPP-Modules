/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:31:56 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:31:57 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)  
{
	// test with vector
	std::cout << "[*]Test easyfind() with vector: " << std::endl;  
	{
		std::vector<int> v;
		srand(time(NULL));
		size_t i(0);
		while (i < 10)
		{
			v.push_back((rand() % 10) + 1);
			++i;
		}
		std::vector<int>::iterator iterator = v.begin();
		std::cout << "[.] Filled Vector:" << std::endl;
		while (iterator != v.end())
		{
			std::cout << *iterator << ", ";
			++iterator;
		}
		std::cout << std::endl;
		int needle = (rand() % 20) + 1;
		std::cout << "[.] Needle : " << needle << std::endl;
		int isin = easyfind(v, needle);
		if (isin)
			std::cout << "[+] Needle was found" << std::endl;
		else
			std::cout << "[!] Needle was not found" << std::endl;
		std::cout << std::endl;
	}
	// test with list
	std::cout << "\nTest easyfind() with list: " << std::endl;  
	{
		std::list<int> l;
		srand(time(NULL));
		size_t i(0);
		while (i < 10)
		{
			l.push_back((rand() % 20) + 1);
			++i;
		}
		std::list<int>::iterator iterator = l.begin();
		std::cout << "[.] Filled Vector:" << std::endl;
		while (iterator != l.end())
		{
			std::cout << *iterator << ", ";
			++iterator;
		}
		std::cout << std::endl;
		int needle = (rand() % 30) + 1;
		std::cout << "[.] Needle : " << needle << std::endl;
		int isin = easyfind(l, needle);
		if (isin)
			std::cout << "[+] Needle was found" << std::endl;
		else
			std::cout << "[!] Needle was not found" << std::endl;
		std::cout << std::endl;
	}
}