/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:30:50 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:30:51 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"

int main(void)
{
	Base *one = new Base();
	Base *two = one->generate();
	one->identify(two);
	one->identify(*two);

	delete one;
	delete two;
	return (EXIT_SUCCESS);
}