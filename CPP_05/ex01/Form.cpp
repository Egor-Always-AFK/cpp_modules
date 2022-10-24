#include "Form.hpp"

const char *Form::GradeTooHighException::what() const throw()
{
	return "Form grade to high!";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Form grade to low!";
}

Form::Form() : _name("Form"), _sign(false), _signGrade(150), _signExec(150)
{ }

Form::Form(std::string name, int signGrade, int signExec) : _name(name), _sign(false), _signGrade(signGrade), _signExec(signExec)
{
	if (signGrade > LOW || signExec > LOW)
		throw Form::GradeTooLowException();
	else if (signGrade < HIGH || signExec < HIGH)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &cpy) : _name(cpy._name), _sign(cpy._sign), _signGrade(cpy._signGrade), _signExec(cpy._signExec)
{
	if (cpy._signGrade > LOW || cpy._signExec > LOW)
		throw Form::GradeTooLowException();
	else if (cpy._signGrade < HIGH || cpy._signExec < HIGH)
		throw Form::GradeTooHighException();
}

Form::~Form()
{ }

std::string Form::getName() const
{
	return (_name);
}

bool Form::getSign() const
{
	return (_sign);
}

int Form::getSignGrade() const
{
	return (_signGrade);
}

int Form::getSignExec() const
{
	return (_signExec);
}

Form &Form::operator=(const Form &src)
{
	_sign = src._sign;
	return (*this);
}


std::ostream & operator<<(std::ostream& o, const Form& f)
{
	o << f.getName() << ". Sign grade: " << f.getSignGrade() << ". Exec grade: " << f.getSignExec() << ". Signed: " << std::boolalpha << f.getSign();
	return (o);
}

void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= _signGrade)
		_sign = true;
	else
		throw Form::GradeTooLowException();
}