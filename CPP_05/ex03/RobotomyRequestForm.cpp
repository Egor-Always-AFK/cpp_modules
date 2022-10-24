#include "RobotomyRequestForm.hpp"

const int RobotomyRequestForm::_sign = 72;
const int RobotomyRequestForm::_exec = 45;


RobotomyRequestForm::RobotomyRequestForm()
{	}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	(void)src;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &str) : AForm("RobotomyRequestForm", str, 72, 45)
{	}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cpy) : AForm(cpy.getName(), cpy.getTarget(), cpy.getSignGrade(), cpy.getSignExec())
{	}

RobotomyRequestForm::~RobotomyRequestForm()
{	}

int RobotomyRequestForm::getSign() const
{
	return (_sign);
}

int RobotomyRequestForm::getExec() const
{
	return (_exec);
}

void RobotomyRequestForm::say() const
{
	std::srand(std::time(0));
	if (std::rand() % 2 == 0)
		std::cout << getTarget() << " has been robotomized successfully\n";
	else
		std::cout << getTarget() << " robotomy failed\n";
}

AForm *RobotomyRequestForm::clone(std::string &name)
{
	return new RobotomyRequestForm(name);
}