#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &cpy);

		virtual ~Dog();

		Dog &operator=(const Dog &src);

		virtual void makeSound(void) const;
};

#endif