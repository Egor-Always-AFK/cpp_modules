#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAanimal 
{	
	private:
		Brain* brain;

	public:
		Cat();
		Cat(const Cat &cpy);

		virtual ~Cat();
		
		Cat &operator=(const Cat &src);

		virtual void makeSound(void) const;
		std::string getIdeas(size_t i) const;
		void setIdeas(size_t i, std::string idea);
};

#endif 