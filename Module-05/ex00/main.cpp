
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat a("Student", 148);
		std::cout << a << std::endl;
		std::cout << "Grade -> " << a.getGrade() << std::endl;
		a.decrementGrade();
		a.decrementGrade();
		std::cout << "Grade -> " << a.getGrade() << std::endl;
		a.decrementGrade();
	}
	catch(const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b;
		std::cout << "Name -> " << b.getName() << std::endl;
		std::cout << "Grade -> " << b.getGrade() << std::endl;
		b.decrementGrade();
		b.decrementGrade();
		b.decrementGrade();
		std::cout << "Grade -> " << b.getGrade() << std::endl;
		b.incrementGrade();
		b.incrementGrade();
		b.incrementGrade();
		std::cout << "Grade -> " << b.getGrade() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}