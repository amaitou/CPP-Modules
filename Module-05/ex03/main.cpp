
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Intern intern;
		intern.makeForm("shrubbery", "target_one");
		intern.makeForm("robotomy request", "target_two");
		intern.makeForm("presidentialpardon", "target_three");
		intern.makeForm("nonexistedobject", "target_four");
	}
	catch(const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}