/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:50:08 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 00:50:10 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "[.] Create a zombie with the name of \"Zombie_1\"" << std::endl;
	Zombie test("Zombie_1");
	std::cout << "[+] Announce Zombie_1" << std::endl ;
	test.announce();
	std::cout << "[.] Allocate a zombie with the name of \"NewZombie\"" << std::endl;
	Zombie *new_zombie = newZombie("NewZombie");
	std::cout << "[+] Announce \"NewZombie\"" << std::endl ;
	new_zombie->announce();
	std::cout << "[*] Create & Announce \"Chump\"" << std::endl;
	randomChump("Chump");
	delete new_zombie;
	return (0);
}