#include "../incl/Dog.hpp"
#include "../incl/Cat.hpp"
#include "../incl/WrongCat.hpp"

int main()
{

	Cat cat;
	Dog dog;
	AAanimal *a1 =  &cat;
	AAanimal *a2 = &dog;

	std::cout << std::endl;
	a1->makeSound();
	a2->makeSound();
	return (0);
}