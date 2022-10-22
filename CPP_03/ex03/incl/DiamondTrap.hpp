#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string name;
    
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &cpy);

        virtual ~DiamondTrap();

        DiamondTrap &operator=(const DiamondTrap &src);
        
        void attack(const std::string name);
        void whoAmI(void);

};