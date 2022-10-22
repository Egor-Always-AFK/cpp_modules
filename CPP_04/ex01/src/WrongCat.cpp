#include "../incl/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "wrong cat";
	std::cout << "WrongCat Default constructor called!\n";
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal(cpy)
{
	*this = cpy;
	std::cout << "WrongCat Copy Constructor called!\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called!(oh no kitty!)\n";
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	if (this != &src)
		type = src.type;
	std::cout << "WrongCat Assignation operator called!\n";
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << type << " say *MEOW*\n"; 
}