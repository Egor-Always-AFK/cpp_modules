#include "Zombie.hpp"

int main()
{
    Zombie *horde;
    size_t numberOfZombies = 5;
    
    horde = zombieHorde(numberOfZombies, "ZoMbIe");
    for (size_t i = 0; i < numberOfZombies; i++)
        horde[i].announce();
    delete[] horde;
    return (0);
}