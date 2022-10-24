#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	private:
		static const int _sign;
		static const int _exec;

		RobotomyRequestForm();
		
		RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
	public:
		RobotomyRequestForm(const std::string &str);
		RobotomyRequestForm(const RobotomyRequestForm &cpy);

		~RobotomyRequestForm();


		int getSign() const;
		int getExec() const;

		void say() const;
};

#endif 
