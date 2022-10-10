#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	zombie->announce();
	return (zombie);
}

void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}