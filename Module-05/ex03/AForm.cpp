#include "AForm.hpp"

AForm::AForm()
	: name("Default"), sign_grade(0), sign_execute(0)
{
	this->is_signed = false;
}

AForm::AForm(const std::string name, const int sign_grade, const int sign_execute, bool is_signed)
	: name(name), sign_grade(sign_grade), sign_execute(sign_execute)
{
	if (sign_grade < 1)
		throw AForm::GradeTooHighException();
	else if (sign_grade > 150)
		throw AForm::GradeTooLowException();
	else
		this->is_signed = is_signed;
}

AForm::~AForm() {}

AForm::AForm(const AForm &copy)
	: name(copy.name), sign_grade(copy.sign_grade), sign_execute(copy.sign_execute)
{
	this->is_signed = copy.is_signed;
}

AForm &AForm::operator = (const AForm &object)
{
	this->is_signed = object.is_signed;
	return (*this);
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high\n");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low\n");
}

const char	*AForm::GradeTooLowToExecute::what() const throw()
{
	return ("Grade too low to execute\n");
}


const std::string	AForm::getName(void) const
{
	return (this->name);
}

int	AForm::getSignGrade(void) const
{
	return (this->sign_grade);
}

int AForm::getSignExecute(void) const
{
	return (this->sign_execute);
}

bool AForm::getIsSigned(void) const
{
	return (this->is_signed);
}

void	AForm::beSigned(Bureaucrat &object)
{
	if (object.getGrade() > this->getSignGrade())
		throw AForm::GradeTooLowException();
	else
		this->is_signed = true;
}