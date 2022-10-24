#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		static const int _sign;
		static const int _exec;
		
		PresidentialPardonForm();
		
		PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
	public:
		PresidentialPardonForm(const std::string &str);
		PresidentialPardonForm(const PresidentialPardonForm &cpy);

		~PresidentialPardonForm();


		int getSign() const;
		int getExec() const;

		void say(void) const;
		AForm *clone(const std::string &name);

};

#endif 
