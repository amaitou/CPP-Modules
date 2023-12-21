/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:07:26 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:07:27 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int			grade;
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
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat & operator = (const Bureaucrat &object);
		std::string	getName(void) const;
		int	getGrade(void) const;
		void	incrementGrade(void);
		void	decrementGrade(void);
		void	signForm(Form &object);
		void	executeForm(Form const & form) const;
};

std::ostream& operator<<(std::ostream &os, Bureaucrat &object);
#endif