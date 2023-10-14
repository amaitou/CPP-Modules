#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45, false)
{
	this->target = "DefaultTarget";
}
RobotomyRequestForm::RobotomyRequestForm(const std::string target):
	Form("RobotomyRequestForm", 72, 45, false)
{
	this->target = target;
}
RobotomyRequestForm::~RobotomyRequestForm() {}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	*this = copy;
}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &object)
{
	(void)object;
	this->target = object.target;
	return (*this);
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return (this->target);
}

void	RobotomyRequestForm::execute( const Bureaucrat& executor) const
{
	if (this->getIsSigned())
	{
		if (executor.getGrade() > this->getSignExecute())
			throw Form::GradeTooLowException();
		std::srand(std::time(nullptr));
    	int randomValue = std::rand() % 2;
		if (randomValue)
			std::cout << this->getTarget() << " has been robotomized successfully 50% of the time." << std::endl;
		else
			std::cout << this->getTarget() << " robotomy failed." << std::endl;
	}
	else
		throw Form::GradeTooLowException();
}