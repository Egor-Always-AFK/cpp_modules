#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureucrat grade to high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureucrat grade to low!";
}

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(150) 
{}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > LOW)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < HIGH)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : _name(cpy._name)
{
	if (cpy._grade > LOW)
		throw Bureaucrat::GradeTooLowException();
	else if (cpy._grade < HIGH)
		throw Bureaucrat::GradeTooHighException();
	_grade = cpy._grade;
}

Bureaucrat::~Bureaucrat()
{ }

std::string Bureaucrat::getName(void) const
{
	return(_name);
}

int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
	{
		if (src._grade > LOW)
			throw Bureaucrat::GradeTooLowException();
		else if (src._grade < HIGH)
			throw Bureaucrat::GradeTooHighException();
		_grade = src._grade;
	}	
	return (*this);
}


std::ostream& operator<<(std::ostream& o, const Bureaucrat& b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (o);
}
