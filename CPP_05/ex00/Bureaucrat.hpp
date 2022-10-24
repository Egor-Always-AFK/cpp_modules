#include <iostream>
#include <string>

#define HIGH 1
#define LOW 150


class  Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	
	public:
		class GradeTooHighException : public std::exception{
			const char *what() const throw();
		};
		class	GradeTooLowException : public std::exception {
			const char *what() const throw();
		};

		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &cpy);

		~Bureaucrat();

		std::string getName(void) const;
		int getGrade(void) const;

		Bureaucrat &operator=(const Bureaucrat &src);
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b);