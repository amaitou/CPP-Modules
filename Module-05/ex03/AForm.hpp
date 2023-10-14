
#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
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
		AForm();
		AForm(const std::string name, const int sign_grade, const int sign_execute, bool is_signed);
		~AForm();
		AForm(const AForm &copy);
		AForm & operator = (const AForm &object);
		const std::string	getName(void) const;
		int	getSignGrade(void) const;
		int	getSignExecute(void) const;
		bool	getIsSigned(void) const;
		void	beSigned(Bureaucrat &object);
		virtual void        execute( const Bureaucrat& executor) const = 0;
};

#endif