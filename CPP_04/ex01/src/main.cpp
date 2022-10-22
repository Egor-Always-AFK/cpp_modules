#include "../incl/Dog.hpp"
#include "../incl/Cat.hpp"
#include "../incl/WrongCat.hpp"

int main()
{
	std::cout << "----------SURFACE TEST----------\n";
	const Animal *meta[10];

	for(size_t i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			meta[i] = new Cat();
			std::cout << std::endl;
		}
		else
		{
			meta[i] = new Dog();
			std::cout << std::endl;
		}
	}
	
	std::cout << std::endl;
	
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << meta[i]->getType() << "\n";
		meta[i]->makeSound();
	}

	std::cout << std::endl;

	for (size_t i = 0; i < 10; i++)
	{
		delete meta[i];
		std::cout << std::endl;
	}
	std::cout << "----------DEEP TEST----------\n";
	Cat *a = new Cat();

	a->setIdeas(0, "How handsome I am\n");
	a->setIdeas(1, "How soft my fur is\n");
	a->setIdeas(2, "Let me eat, slave!\n");
	a->setIdeas(2002, "Idk it won't be recorded anyway, so I'll just write the year of birth instead of the index.");

	Cat *b = new Cat(*a);

	std::cout << "Test first cat:\nHis ideas:\n";
	for (size_t i = 0; i < 3; i++)
		std::cout << i << ") " << a->getIdeas(i) << "\n";
	
	std::cout << "delete first cat(saaad)\n";
	delete a;
	
	std::cout << "\nSame test for second cat:\nHis ideas:\n";
		for (size_t i = 0; i < 3; i++)
		std::cout << i << ") " << b->getIdeas(i) << "\n";
	
	std::cout << "delete second cat(saaad)\n";
	delete b;

	return (0);
}