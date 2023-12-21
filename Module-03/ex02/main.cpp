/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:59:34 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 00:59:35 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

int main(void)
{
	FragTrap fragone = FragTrap("FragTrap_Warrior");

	fragone.attack("enemy");
	fragone.highFivesGuys();
	return (0);
}