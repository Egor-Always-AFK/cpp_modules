#include "../incl/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "wrong_default";
	std::cout << "WrongAnimal Default Constructor called!\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	*this = cpy;
	std::cout << "WrongAnimal Copy Constructor called!\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called!\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	if (this != &src)
		type = src.type;
	std::cout << "WrongAnimal Assignation operator called!\n";
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << type << " is mute! :c\n";
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}