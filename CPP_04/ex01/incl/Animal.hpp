#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string type;
	
	public:
		Animal();
		Animal(const Animal &cpy);

		virtual ~Animal();

		Animal &operator=(const Animal &src);

		virtual void makeSound(void) const;
		std::string getType(void) const;
};

#endif
