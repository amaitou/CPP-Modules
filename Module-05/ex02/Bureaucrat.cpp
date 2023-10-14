#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(): name("Default")
{
	this->grade = 0;
}
Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string name, int grade): name(name)
{
	if (grade < 0)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->grade = grade;
}
const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade is too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade is too low");
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): name(copy.name), grade(copy.grade) {}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &object)
{
	this->grade = object.grade;
	return *this;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->getGrade() <= 1)
		throw GradeTooHighException();
	this->grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->getGrade() >= 150)
		throw GradeTooLowException();
	this->grade++;
}

std::ostream& operator<<(std::ostream &os, Bureaucrat &object)
{
	return (os << object.getName() << " ,bureaucrat grade " << object.getGrade());
}

void Bureaucrat::signForm(AForm &object)
{
	if (object.getIsSigned())
		std::cout << this->getName() << " signed " << object.getName();
	else
		std::cout << this->getName() << " couldn’t sign " << object.getName() << " because grade is too low" << std::endl;
}

void	Bureaucrat::executeForm(AForm const &form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(std::exception &e)
	{
		throw AForm::GradeTooLowToExecute();
	}
}