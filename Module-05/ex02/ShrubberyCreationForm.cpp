#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137, false)
{
	this->target = "DefaultTarget";
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target):
	AForm("ShrubberyCreationForm", 145, 137, false)
{
	this->target = target;
}
ShrubberyCreationForm::~ShrubberyCreationForm() {}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	*this = copy;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &object)
{
	(void)object;
	this->target = object.target;
	return (*this);
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return (this->target);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (this->getIsSigned())
	{
		if (executor.getGrade() > this->getSignExecute())
			throw AForm::GradeTooLowException();
		std::ofstream outputFile(this->getTarget() + "_shrubbery", std::ios::out | std::ios::trunc);
		if (outputFile.is_open())
		{
			outputFile << "       _-_\n";
			outputFile << "    /~~   ~~\\\n";
			outputFile << " /~~         ~~\\\n";
			outputFile << "{               }\n";
			outputFile << " \\  _-     -_  /\n";
			outputFile << "   ~  \\\\ //  ~\n";
			outputFile << "_- -   | | _- _\n";
			outputFile << "  _ -  | |   -_\n";
			outputFile << "      // \\\\\n";
			outputFile.close();
		}
		else
			std::cerr << "Failed to create the file " << this->getTarget() + "_shrubbery" << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
}