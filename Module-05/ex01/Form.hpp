/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:06:55 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:06:56 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string 	name;
		const int			sign_grade;
		const int			sign_execute;
		bool				is_signed;
	public:
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		Form();
		Form(const std::string name, const int sign_grade, const int sign_execute, bool is_signed);
		~Form();
		Form(const Form &copy);
		Form & operator = (const Form &object);
		const std::string	getName(void) const;
		int	getSignGrade(void) const;
		int	getSignExecute(void) const;
		bool	getIsSigned(void) const;
		void	beSigned(Bureaucrat &object);
};

std::ostream& operator<<(std::ostream &os, Form &object);

#endif