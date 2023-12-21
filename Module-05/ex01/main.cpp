/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:06:59 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:07:00 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat b("Cop", 50);
		Form f("Paper", 80, 80, false);
		std::cout << "Bureaucrat Info -> " << b << std::endl;
		f.beSigned(b);
		b.signForm(f);
		std::cout << f << std::endl;
	} 
	catch(const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}