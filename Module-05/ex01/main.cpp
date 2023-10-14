
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat b("Cop", 50);
		Form f("Paper", 80, 80, false);
		std::cout << "Bureaucrat Info -> " << b << std::endl;
		f.beSigned(b);
		b.signForm(f);
	} 
	catch(const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}