
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

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
		void	signForm(Form &object) const;
};

std::ostream& operator<<(std::ostream &os, Bureaucrat &object);
#endif