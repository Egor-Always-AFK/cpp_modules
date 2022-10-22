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
	delete j;
	delete i;
	delete wrongMeta;
	delete wrongCat;

	return (0);
}