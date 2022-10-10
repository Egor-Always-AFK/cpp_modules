#include "Zombie.hpp"

Zombie::Zombie()
{
	name = std::string();
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "oh no dead " << name << " alive!\n";
}

Zombie::~Zombie()
{
	std::cout << name << " died (how comical)\n";
}

void Zombie::announce(void) const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string name)
{
	this->name = name;
}