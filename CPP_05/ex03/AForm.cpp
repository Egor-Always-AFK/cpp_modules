#include "AForm.hpp"

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Form grade to high!";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Form grade to low!";
}

const char *AForm::FormNotSignException::what() const throw()
{
	return "Form not sign!";
}

AForm::AForm() : _name("AForm"), _sign(false), _signGrade(150), _signExec(150)
{ }

AForm::AForm(std::string name, std::string target, int signGrade, int signExec) : _name(name),  _target(target), _sign(false), _signGrade(signGrade), _signExec(signExec)
{
	if (signGrade > LOW || signExec > LOW)
		throw AForm::GradeTooLowException();
	else if (signGrade < HIGH || signExec < HIGH)
		throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm &cpy) : _name(cpy._name), _sign(cpy._sign), _signGrade(cpy._signGrade), _signExec(cpy._signExec)
{
	if (cpy._signGrade > LOW || cpy._signExec > LOW)
		throw AForm::GradeTooLowException();
	else if (cpy._signGrade < HIGH || cpy._signExec < HIGH)
		throw AForm::GradeTooHighException();
}

AForm::~AForm()
{ }

std::string AForm::getName() const
{
	return (_name);
}

std::string AForm::getTarget() const
{
	return (_target);
}

bool AForm::getSign() const
{
	return (_sign);
}

int AForm::getSignGrade() const
{
	return (_signGrade);
}

int AForm::getSignExec() const
{
	return (_signExec);
}

AForm &AForm::operator=(const AForm &src)
{
	
	_sign = src._sign;
	return (*this);
}


std::ostream & operator<<(std::ostream& o, const AForm& f)
{
	o << f.getName() << ". Sign grade: " << f.getSignGrade() << ". Exec grade: " << f.getSignExec() << ". Signed: " << std::boolalpha << f.getSign();
	return (o);
}

void AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= _signGrade)
		_sign = true;
	else
		throw AForm::GradeTooLowException();
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (!_sign)
		throw AForm::FormNotSignException();
	else if (executor.getGrade() > _signGrade)
		throw AForm::GradeTooHighException();
	else
		say();
}