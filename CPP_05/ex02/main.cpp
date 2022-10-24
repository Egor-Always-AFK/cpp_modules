#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
    Bureaucrat b1("Jim", 1);
    AForm *f1 = new PresidentialPardonForm("President");
    AForm *f2 = new RobotomyRequestForm("Robot");
    AForm *f3 = new ShrubberyCreationForm("Tree");

    b1.signAForm(*f1);
    b1.executeForm(*f1);
    b1.signAForm(*f2);
    b1.executeForm(*f2);
    b1.signAForm(*f3);
    b1.executeForm(*f3);
}