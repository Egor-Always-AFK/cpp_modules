#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat b1("Bob", 1);
		std::cout << b1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat b2("Jim", 150);
		std::cout << b2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat b3("Bart", 0);
		std::cout << b3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat b4("Ed", 151);
		std::cout << b4 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form f1("f1", 1, 150);
		std::cout << f1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form f2("f2", 0, 151);
		std::cout << f2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	Form f3("standart", 10, 20);
	Form f4("invalid", 1, 1);
	Bureaucrat b1("John", 1);
	Bureaucrat b2("Rosy", 150);

	b2.signForm(f3);
	std::cout << f3 << std::endl;
	b2.signForm(f4);
	std::cout << f4 << std::endl;

	b1.signForm(f3);
	std::cout << f3 << std::endl;
	b1.signForm(f4);
	std::cout << f4 << std::endl;
}