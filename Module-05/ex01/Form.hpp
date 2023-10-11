
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
		class GradeTooHighException
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException
		{
			public:
				virtual const char *what() const throw();
		};
		Form();
		Form(const std::string name, const int sign_grade, const int sign_execute, bool is_signed);
		~Form();
		Form(const Form &copy);
		Form & operator = (const Form &object);
		const std::string	getName(void);
		int	getSignGrade(void);
		int	getSignExecute(void);
		bool	getIsSigned(void);
		void	beSigned(Bureaucrat &object);
};

#endif