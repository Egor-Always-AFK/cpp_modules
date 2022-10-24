#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
        static const int _sign;
        static const int _exec;

        ShrubberyCreationForm();
        
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
    public:
        ShrubberyCreationForm(const std::string &str);
        ShrubberyCreationForm(const ShrubberyCreationForm &cpy);

        ~ShrubberyCreationForm();


        int getSign() const;
        int getExec() const;

        void say(void) const;
		AForm *clone(const std::string &name);
};

#endif 
