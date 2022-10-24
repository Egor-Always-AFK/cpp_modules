#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm
{
	private:
		std::string _name;
		std::string _target;
		bool _sign;
		int _signGrade;
		int _signExec;
	public:
		class GradeTooHighException : public std::exception {
			const char *what() const throw();
		};
		class	GradeTooLowException : public std::exception {
			const char *what() const throw();
		};
		class FormNotSignException : public std::exception {
			const char *what() const throw();
		};

		AForm();
		AForm(std::string name, std::string target, int signGrade, int signExec);
		AForm(const AForm &cpy);

		virtual~AForm();

		std::string getName() const;
		std::string getTarget() const;
		bool getSign() const;
		int getSignGrade() const;
		int getSignExec() const;

		AForm &operator=(const AForm &src);

		void beSigned(const Bureaucrat &b);
		void execute(Bureaucrat const & executor) const;
		virtual void say(void) const = 0;
};

std::ostream &operator<<(std::ostream& o, const AForm &f);

#endif 
