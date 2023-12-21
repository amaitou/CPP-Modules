/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:08:36 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:08:37 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Intern intern;
		intern.makeForm("shrubbery creation", "target_one");
		intern.makeForm("robotomy request", "target_two");
		intern.makeForm("presidential pardon", "target_three");
		intern.makeForm("non existed object", "target_four");
	}
	catch(const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}