#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &cpy);

        virtual ~Cat();
        
        Cat &operator=(const Cat &src);

        virtual void makeSound(void) const;
};

#endif 