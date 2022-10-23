#include "../incl/Cat.hpp"

Cat::Cat() : AAanimal ()
{
	type = "cat";
	brain = new Brain();
	std::cout << "Cat Default constructor called!\n";
}

Cat::Cat(const Cat &cpy) : AAanimal ()
{
	std::cout << "Cat Copy Constructor called!\n";
	*this = cpy;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Destructor called!(oh no kitty!)\n";
}

Cat &Cat::operator=(const Cat &src)
{
	if (this != &src)
	{
		type = src.type;
		brain = new Brain();
		*brain = *src.brain;
	}
	std::cout << "Cat Assignation operator called!\n";
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << type << " say *MEOW*\n"; 
}

std::string Cat::getIdeas(size_t i) const
{
	return (brain->getIdea(i));
}

void Cat::setIdeas(size_t i, std::string idea)
{
	brain->setIdea(i, idea);
}