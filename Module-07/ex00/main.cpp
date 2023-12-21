/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:31:11 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:31:12 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	// My Tests
	std::cout << "My Tests :" << std::endl;
	{
		// Swap Function
		int a = 5;
		int	b = 10;
		std::cout << "a :" << a << ", b: " << b << std::endl;
		swap(a, b);
		std::cout << "a :" << a << ", b: " << b << std::endl;

		// Max Function
		char x = 'x';
		char y = 'y';
		std::cout << max(x, y) << std::endl;
		std::cout << max(y, x) << std::endl;

		// Min Function
		float f1 = 127.245f;
		float f2 = 117.243f;
		std::cout << min(f1, f2) << std::endl;
	}

	// Default Exercise Tests
	std::cout << "\nDefault Tests :" << std::endl;
	{
		int a = 2;
		int b = 3;
		swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
		return 0;
	}
	return (EXIT_SUCCESS);
}