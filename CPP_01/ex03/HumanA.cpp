#include "HumanA.hpp"

void HumanA::attack()
{
     std::cout << name << " attacks with their " << weapon->getType() << "\n";
}

void HumanA::setType(Weapon &weapon)
{
    this->weapon = &weapon;
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
    this->name = name;
    this->weapon = &weapon;
}