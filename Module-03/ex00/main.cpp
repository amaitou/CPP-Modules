/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:58:32 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 00:58:33 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapone   = ClapTrap();
	ClapTrap claptwo   = ClapTrap("Warrior_1");

	clapone.takeDamage(5);
	clapone.beRepaired(30);
	clapone.attack("l3do");

	claptwo.attack("l3do_2");
	claptwo.takeDamage(10);
	claptwo.beRepaired(50);

	ClapTrap clapthree = ClapTrap("Warrior_3");

	clapthree = claptwo;
	clapthree.attack("l3do_3");
	clapthree.takeDamage(4);
	clapthree.beRepaired(20);
	return (0);
}