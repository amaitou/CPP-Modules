/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:50:58 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 00:50:59 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int	iterator;
	Zombie *horde = new Zombie[N];
	if (!horde)
		return (NULL);
	for(iterator = 0; iterator < N; iterator++)
		horde[iterator] = Zombie(name);
	return horde;
}