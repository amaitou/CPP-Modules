
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

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
		void	signForm(AForm &object);
		void	executeForm(AForm const & form) const;
};

std::ostream& operator<<(std::ostream &os, Bureaucrat &object);
#endif