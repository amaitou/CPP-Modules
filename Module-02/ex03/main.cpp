/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:55:48 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 00:55:49 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point a(0, 0);
	Point b(10, 30);
	Point c(20, 0);
	Point point(30, 15);

	if (bsp(a, b, c, point))
		std::cout << "In Triangle" << std::endl;
	else
		std::cout << "Not In Triangle" << std::endl;
}