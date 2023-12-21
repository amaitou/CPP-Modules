/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:53:29 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 00:53:30 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	if (ac < 2)
	{
		std::cout << "Invalid Arguments" << std::endl;
		return (0);
	}
	std::string cppString(av[1]);
	harl.complain(av[1]);
	return (0);
}