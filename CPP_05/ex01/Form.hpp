#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		std::string _name;
		bool _sign;
		int _signGrade;
		int _signExec;
	public:
		class GradeTooHighException : public std::exception{
			const char *what() const throw();
		};
		class	GradeTooLowException : public std::exception {
			const char *what() const throw();
		};

		Form();
		Form(std::string name, int signGrade, int signExec);
		Form(const Form &cpy);

		~Form();

		std::string getName() const;
		bool getSign() const;
		int getSignGrade() const;
		int getSignExec() const;

		Form &operator=(const Form &src);

		void beSigned(const Bureaucrat &b);
};

std::ostream &operator<<(std::ostream& o, const Form &f);

#endif