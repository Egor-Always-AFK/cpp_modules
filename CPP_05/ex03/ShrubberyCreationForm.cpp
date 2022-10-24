#include "ShrubberyCreationForm.hpp"

const int ShrubberyCreationForm::_sign = 145;
const int ShrubberyCreationForm::_exec = 137;

ShrubberyCreationForm::ShrubberyCreationForm() 
{   }

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm & src)
{
	(void)src;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &str) : AForm("ShrubberyCreationForm", str, 145, 137)
{	}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) : AForm(cpy.getName(), cpy.getTarget(), cpy.getSignGrade(), cpy.getSignExec())
{	}

ShrubberyCreationForm::~ShrubberyCreationForm()
{	}

int ShrubberyCreationForm::getSign() const
{
	return (_sign);
}

int ShrubberyCreationForm::getExec() const
{
	return (_exec);
}

void ShrubberyCreationForm::say() const
{
	std::string fileName = this->getTarget() + "_shrubbery";
	std::ofstream file(fileName.c_str());
	if (!file.is_open())
		return ;
	file << "       _-_       " << std::endl
			 << "    /~~   ~~\\    " << std::endl
			 << " /~~         ~~\\ " << std::endl
			 << "{               }" << std::endl
			 << " \\  _-     -_  / " << std::endl
			 << "   ~  \\ //  ~   " << std::endl
			 << "_- -   | | _- _  " << std::endl
			 << "  _ -  | |   -_  " << std::endl
			 << "      // \\      " << std::endl;
	file.close();
}

AForm *ShrubberyCreationForm::clone(const std::string &name)
{
	return new ShrubberyCreationForm(name);
}