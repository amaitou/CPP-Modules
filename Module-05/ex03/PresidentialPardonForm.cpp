#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5, false)
{
	this->target = "DefaultTarget";
}
PresidentialPardonForm::PresidentialPardonForm(const std::string target):
	AForm("PresidentialPardonForm", 25, 5, false)
{
	this->target = target;
}
PresidentialPardonForm::~PresidentialPardonForm() {}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	*this = copy;
}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &object)
{
	(void)object;
	this->target = object.target;
	return (*this);
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return (this->target);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (this->getIsSigned())
	{
		if (executor.getGrade() > this->getSignExecute())
			throw AForm::GradeTooLowToExecute();
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}