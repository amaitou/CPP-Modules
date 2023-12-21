/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:31:26 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:31:27 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	// test iter function with array of integers
	{
		size_t	len = 7;
		int arr[] = {1, 2, 3, 4, 5, 6, 7};
		iter(arr, len, print_elements<int>);
		std::cout << std::endl;
	}

	// test iter function with array of characters
	{
		size_t len = 10;
		char chars[] = "42 Network";
		iter(chars, len, print_elements<char>);
		std::cout << std::endl;
	}

	// test iter function with floats
	{
		size_t len = 4;
		float floats[] = {1.2, 50.14, 70.02, 1.00};
		iter(floats, len, print_elements<float>);
		std::cout << std::endl;
	}

	// test array of strings
	{
		size_t len = 6;
		std::string strings[] = {"Amelia", "Elijah",
								"Olivia", "Jackson",
								"Sophia", "Liam"};
		iter(strings, len, print_elements<std::string>);
		std::cout << std::endl;
	}
	
	return (EXIT_SUCCESS);
}