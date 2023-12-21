/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:58:51 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 00:58:55 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scavone   = ScavTrap();

	scavone.takeDamage(5);
	scavone.beRepaired(30);
	scavone.attack("l3do");

	ScavTrap scavtwo = ScavTrap("Warrior_3");

	scavtwo = scavone;
	scavtwo.guardGate();
	return (0);
}