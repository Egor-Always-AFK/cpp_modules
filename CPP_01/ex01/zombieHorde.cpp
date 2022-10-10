#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *horde = new Zombie[N];
    if (horde == NULL)
    {
        std::cout << "Necromancy rite failed\n";
        return (0);
    }
    for (size_t i = 0; i < (size_t)N; i++)
        horde[i].setName(name);
    return (horde);
}