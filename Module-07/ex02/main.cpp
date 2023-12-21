/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:31:40 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:31:41 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    // test the array with integers
	std::cout << "Test With Int:" << std::endl;
    {
		// create an instance
		try
		{
			Array<int> integers_1(10);
			Array<int> integers_2;
			t_ui i(0);

			srand(time(NULL));
			while (i < integers_1.size())
			{
				// fill the array with random numbers
				integers_1[i] = (rand() % 20) + 1;
				++i;
			}
			// print array elements of integer_1
			std::cout << integers_1 << std::endl;

			// using copy assignment operator to assign integer_1 to integer_2
			integers_2 = integers_1;
			// print array elements of integer_2
			std::cout << integers_2 << std::endl;

			// try to access with a valid index
			std::cout << integers_2[5] << std::endl;
			// try to access with an index out of range
			std::cout << integers_1[100] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
    }
	// test the array with strings
	std::cout << "\nTest With Strings:" << std::endl;
	{
		try
		{
			Array<std::string> strings_1(5);
			Array<std::string> strings_2;

			// fill the array 
			strings_1[0] = "Alice";
			strings_1[1] = "BOb";
			strings_1[2] = "Charlie";
			strings_1[3] = "David";
			strings_1[4] = "Eve";

			// print the array elements
			std::cout << strings_1 << std::endl;

			// copy in an other object using the copy assignment
			strings_2 = strings_1;
			// output the elements in strings_2
			std::cout << strings_2 << std::endl;
			// try to access with a valid index
			std::cout << strings_1[2] << std::endl;
			// try to access with an invalid index
			std::cout << strings_2[5] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	
    return (EXIT_SUCCESS);
}