#include "../incl/Dog.hpp"
#include "../incl/Cat.hpp"
#include "../incl/WrongCat.hpp"

int main()
{


	// AAanimal test;
	Cat *cat = new Cat();
	Dog *dog = new Dog(); 

	std::cout << std::endl;
	cat->makeSound();
	dog->makeSound();

	delete cat;
	delete dog;
	return (0);
}