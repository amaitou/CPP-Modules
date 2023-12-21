/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:06:51 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:06:52 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
	: name("Default"), sign_grade(0), sign_execute(0)
{
	this->is_signed = false;
}

Form::Form(const std::string name, const int sign_grade, const int sign_execute, bool is_signed)
	: name(name), sign_grade(sign_grade), sign_execute(sign_execute)
{
	if (sign_grade < 1)
		throw Form::GradeTooHighException();
	else if (sign_grade > 150)
		throw Form::GradeTooLowException();
	else
		this->is_signed = is_signed;
}

Form::~Form() {}

Form::Form(const Form &copy)
	: name(copy.name), sign_grade(copy.sign_grade), sign_execute(copy.sign_execute)
{
	this->is_signed = copy.is_signed;
}

Form &Form::operator = (const Form &object)
{
	this->is_signed = object.is_signed;
	return (*this);
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high\n");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low\n");
}

const std::string	Form::getName(void) const
{
	return (this->name);
}

int	Form::getSignGrade(void) const
{
	return (this->sign_grade);
}

int Form::getSignExecute(void) const
{
	return (this->sign_execute);
}

bool Form::getIsSigned(void) const
{
	return (this->is_signed);
}

void	Form::beSigned(Bureaucrat &object)
{
	if (object.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	else
		this->is_signed = true;
}

std::ostream& operator<<(std::ostream &os, Form &object)
{
	return (os << "Name: " << object.getName() << "\nGrade: " << object.getSignGrade()
		<< "\nExecution: " << object.getSignExecute() << "\nIsSigned: "
		<< (object.getIsSigned() ? "true": "false")) << std::endl;
}