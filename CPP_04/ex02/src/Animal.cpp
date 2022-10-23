#include "../incl/AAnimal.hpp"

AAanimal ::AAanimal ()
{
	type = "default";
	std::cout << "AAanimal  Default Constructor called!\n";
}

AAanimal ::AAanimal (const AAanimal  &cpy)
{
	*this = cpy;
	std::cout << "AAanimal  Copy Constructor called!\n";
}

AAanimal ::~AAanimal ()
{
	std::cout << "AAanimal  Destructor called!\n";
}

AAanimal  &AAanimal ::operator=(const AAanimal  &src)
{
	if (this != &src)
		type = src.type;
	std::cout << "AAanimal  Assignation operator called!\n";
	return (*this);
}

void AAanimal ::makeSound(void) const
{
	std::cout << "The AAanimal  is mute! :c\n";
}

std::string AAanimal ::getType(void) const
{
	return (type);
}