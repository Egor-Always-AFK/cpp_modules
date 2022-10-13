
#include "Weapon.hpp"

Weapon::Weapon()
{
    type = std::string();
}

Weapon::Weapon(const std::string &name)
{
    this->setType(name);
}

void Weapon::setType(const std::string &type)
{
    this->type = type;
}

std::string Weapon::getType()
{
    return(type);
}