#include "../incl/Dog.hpp"
#include "../incl/Cat.hpp"
#include "../incl/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "--------------WRONG ZONE--------------\n";

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << wrongMeta->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	
	wrongCat->makeSound();
	wrongMeta->makeSound();

	std::cout << "--------------DELETE ALL--------------\n";
	delete meta;
	std::cout << std::endl;
	delete j;
	std::cout << std::endl;
	delete i;
	std::cout << std::endl;
	delete wrongMeta;
	std::cout << std::endl;
	delete wrongCat;

	return (0);
}