#include "../incl/Animal.hpp"

Animal::Animal()
{
	type = "default";
	std::cout << "Animal Default Constructor called!\n";
}

Animal::Animal(const Animal &cpy)
{
	*this = cpy;
	std::cout << "Animal Copy Constructor called!\n";
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called!\n";
}

Animal &Animal::operator=(const Animal &src)
{
	if (this != &src)
		type = src.type;
	std::cout << "Animal Assignation operator called!\n";
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "The animal is mute! :c\n";
}

std::string Animal::getType(void) const
{
	return (type);
}