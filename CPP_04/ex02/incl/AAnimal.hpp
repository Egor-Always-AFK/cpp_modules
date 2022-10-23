#ifndef AAanimal_HPP
#define AAanimal_HPP

#include <string>
#include <iostream>

class AAanimal 
{
	protected:
		std::string type;
	
	public:
		AAanimal ();
		AAanimal (const AAanimal  &cpy);

		virtual ~AAanimal ();

		AAanimal  &operator=(const AAanimal  &src);

		virtual void makeSound(void) const;
		std::string getType(void) const;
};

#endif
