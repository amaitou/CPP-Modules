
#ifndef AForm_HPP
#define AForm_HPP

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
		class GradeTooLowToExecute: public std::exception
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
		virtual void        execute( const Bureaucrat& executor) const = 0;
};

std::ostream& operator<<(std::ostream &os, Form &object);

#endif