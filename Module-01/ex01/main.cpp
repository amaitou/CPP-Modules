/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:50:42 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 00:50:43 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int	n;
	std::string	name;
	int iterator;

	n = 20;
	name = "ZombieHorde";
	Zombie	*horde = zombieHorde(n, name);
	iterator = 0;
	while (iterator < n)
	{
		std::cout << "[" << iterator << "] ";
		horde[iterator].announce();
		iterator++;
	}
	delete[] horde;
}