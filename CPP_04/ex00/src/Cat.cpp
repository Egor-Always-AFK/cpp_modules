#include "../incl/Cat.hpp"

Cat::Cat() : Animal()
{
	type = "cat";
	std::cout << "Cat Default constructor called!\n";
}

Cat::Cat(const Cat &cpy) : Animal(cpy)
{
	*this = cpy;
	std::cout << "Cat Copy Constructor called!\n";
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called!(oh no kitty!)\n";
}

Cat &Cat::operator=(const Cat &src)
{
	if (this != &src)
		type = src.type;
	std::cout << "Cat Assignation operator called!\n";
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << type << " say *MEOW*\n"; 
}