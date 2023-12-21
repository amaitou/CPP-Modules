/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:06:15 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:06:16 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Default")
{
	this->grade = 0;
}
Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string name, int grade): name(name)
{
	if (grade < 0)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = grade;
}
const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade is too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade is too low");
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): name(copy.name), grade(copy.grade) {}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &object)
{
	this->grade = object.grade;
	return *this;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->getGrade() <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->getGrade() >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

std::ostream& operator<<(std::ostream &os, Bureaucrat &object)
{
	return (os << object.getName() << " ,bureaucrat grade " << object.getGrade());
}