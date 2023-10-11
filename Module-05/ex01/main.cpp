
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat b("Cop", 1000);
		Form f("Paper", 80, 80, false);
		std::cout << "Bureaucrat Info -> " << b << std::endl;
		f.beSigned(b);
		b.signForm(f);
	} 
	catch (const Form::GradeTooHighException &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}