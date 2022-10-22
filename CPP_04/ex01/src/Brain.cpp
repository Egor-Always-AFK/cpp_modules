#include "../incl/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called!\n";
}

Brain::Brain(const Brain &cpy)
{
	*this = cpy;
	std::cout << "Brain Copy constructor called!\n";
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called!\n";
}

Brain &Brain::operator=(const Brain &src)
{
	if (this != &src)
		for (size_t i = 0; i < 100; i++)
			if (src.ideas[i].length() > 0)
				ideas[i].assign(src.ideas[i]);

	std::cout << "Brain Assignation operator called!\n";
	return (*this);
}

const std::string Brain::getIdea(size_t i) const
{
	if (i < 100)
		return (ideas[i]);
	else
		return("The animal brain is small and can hold only 100 ideas :c\n");
}

void Brain::setIdea(size_t i, std::string idea)
{
	if (i < 100)
		ideas[i] = idea;
	else
		std::cout << "The animal brain is small and can hold only 100 ideas :c\n";
}