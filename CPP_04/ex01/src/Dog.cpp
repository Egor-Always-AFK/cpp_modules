#include "../incl/Dog.hpp"

Dog::Dog() : Animal()
{
	type = "dog";
	brain = new Brain();
	std::cout << "Dog Default Constructor called!\n";
}

Dog::Dog(const Dog &cpy) : Animal()
{
	*this = cpy;
	std::cout << "Dog Copy Constructor called!\n";
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog Destructor called!(oh no puppy!)\n";
}

Dog &Dog::operator=(const Dog &src)
{
	if (this != &src)
	{
		type = src.type;
		brain = new Brain();
		*brain = *src.brain;
	}	
	std::cout << "Dog Assignation operator called!\n";
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << type << " say *BARK*\n";
}

std::string Dog::getIdeas(size_t i) const
{
	return (brain->getIdea(i));
}

void Dog::setIdeas(size_t i, std::string idea)
{
	brain->setIdea(i, idea);
}