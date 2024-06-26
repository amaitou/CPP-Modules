/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:08:25 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:08:26 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}
Intern::~Intern() {}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern & Intern::operator = (const Intern &object)
{
	(void)object;
	return (*this);
}

Form *Intern::makeForm(std::string name, const std::string target)
{
	std::string names[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form *objects[] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	int i(0);
	while (i < 3)
	{
		if (name == names[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return (objects[i]);
		}
		++i;
	}
	std::cout << "Intern failed to created object " << name << std::endl;
	return (NULL);
}