#include "../incl/Dog.hpp"

Dog::Dog()
{
	type = "dog";
	std::cout << "Dog Default Constructor called!\n";
}

Dog::Dog(const Dog &cpy) : Animal(cpy)
{
	*this = cpy;
	std::cout << "Dog Copy Constructor called!\n";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called!(oh no puppy!)\n";
}

Dog &Dog::operator=(const Dog &src)
{
	if (this != &src)
		type = src.type;
	std::cout << "Dog Assignation operator called!\n";
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << type << " say *BARK*\n";
}