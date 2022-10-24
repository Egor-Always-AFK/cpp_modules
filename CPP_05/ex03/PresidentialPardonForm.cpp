#include "PresidentialPardonForm.hpp"

const int PresidentialPardonForm::_sign = 25;
const int PresidentialPardonForm::_exec = 5;

PresidentialPardonForm::PresidentialPardonForm()
{	}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	(void)src;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &str) : AForm("PresidentialPardonForm", str, 25, 5)
{	}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : AForm(cpy.getName(),  cpy.getTarget(), cpy._sign, cpy._exec)
{	}

PresidentialPardonForm::~PresidentialPardonForm()
{	}

int PresidentialPardonForm::getSign() const
{
	return (_sign);
}

int PresidentialPardonForm::getExec() const
{
	return (_exec);
}

void PresidentialPardonForm::say(void) const
{
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

AForm *PresidentialPardonForm::clone(const std::string &name)
{
	return new PresidentialPardonForm(name);
}