/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:33:23 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:33:24 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **ag)
{
    if (ac <= 1)
    {
        std::cout << "Error: sequence of numbers needed" << std::endl;
        return (1);
    }
    PmergeMe p;
    if (p.parse_numbers(ag))
	{
		std::cout << "Error" << std::endl;
		return (1);
	}
    p.sort_vector();
    p.sort_deque();
    return (0);
}
