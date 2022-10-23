#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAanimal 
{
	private:
		Brain* brain;

	public:
		Dog();
		Dog(const Dog &cpy);

		virtual ~Dog();

		Dog &operator=(const Dog &src);

		virtual void makeSound(void) const;
		std::string getIdeas(size_t i) const;
		void setIdeas(size_t i, std::string idea);
};

#endif