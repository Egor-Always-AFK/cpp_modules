#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie = newZombie("Bob");
	randomChump("Bart");
	delete zombie;
	return (0);
}