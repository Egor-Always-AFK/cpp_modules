#pragma once

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        Weapon(const std::string &name);
        std::string getType();
        void setType(const std::string &type);
};