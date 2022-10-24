#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	{
		Intern  someRandomIntern;
		AForm*   rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}
	{
		Intern  someRandomIntern;
		AForm*   rrf;
		rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
		delete rrf;
	}
	{
		Intern  someRandomIntern;
		AForm*   rrf;
		rrf = someRandomIntern.makeForm("presidential request", "Bender");
		delete rrf;
	}
	{
		Intern  someRandomIntern;
		AForm*   rrf;
		rrf = someRandomIntern.makeForm("bad request", "Bender");
		delete rrf;
	}
}