#include "Intern.hpp"

Intern::Intern()
{	}

Intern::Intern(const Intern & copy)
{
	*this = copy;
}


Intern::~Intern()
{	}

AForm *Intern::makeForm(const std::string& name, const std::string& target)
{
	AForm * ret;
	AForm * (*Forms[3])(const std::string& name) = {&PresidentialPardonForm::clone, &RobotomyRequestForm::clone, &ShrubberyCreationForm::clone};
	std::string	forms[3] = {"presidential request", "robotomy request", "shrubbery request"};
	int i = 0;
	while (i < 3 && name.compare(forms[i])) {
		i++;
	}
	switch (i)
	{
	case 3:
		std::cout << "Form doesn't exist" << std::endl;
		return NULL;
		break;
	
	default:
		ret = Forms[i](target);
		std::cout << "Intern creates " << *ret << std::endl;
		break;
	}
	return ret;
}

Intern & Intern::operator=(const Intern & assign) {
	(void)assign;
	return (*this);
}
