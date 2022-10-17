#pragma once

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    private:
        bool gateKeeperMode;

    public:
    ScavTrap();
    ScavTrap(const ScavTrap &cpy);
    ScavTrap(std::string name);

    ScavTrap &operator=(const ScavTrap &src);

    void attack(const std::string &name);
    void guardGate(void);

};