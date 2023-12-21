/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:01:29 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:01:30 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond("Diamond_warrior");

	diamond.attack("l3do");
	diamond.beRepaired(30);
	diamond.whoAmI();

	return (0);
}
