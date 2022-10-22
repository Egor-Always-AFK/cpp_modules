#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 20;
    gateKeeperMode = false;
    std::cout << "ScavTrap Default constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 20;
    gateKeeperMode = false;
    std::cout << "ScavTrap Parameterized constructor called!\n";
}

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy)
{
    gateKeeperMode = cpy.gateKeeperMode;
    std::cout << "ScavTrap Copy Constructor called!\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called!\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    if (this != &src)
    {
        name = src.name;
        hitPoints = src.hitPoints;
        energyPoints = src.energyPoints;
        attackDamage = src.attackDamage;
        gateKeeperMode = src.gateKeeperMode;
        std::cout << "ScavTrap Assignation operator called!\n";
    }
    return (*this);
}

void ScavTrap::attack(const std::string &name)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << name << ", causing " << attackDamage << " points of damage!\n";
		energyPoints--;
	}
	else if (energyPoints == 0)
		std::cout << "ClapTrap " << this->name << " is not able to attack " << name << ", cause he has no energy points left!\n";
	else
		std::cout << "ClapTrap " << this->name << " is not able to attack " << name << ", cause he has no hit points left!\n";
}

void ScavTrap::guardGate(void)
{
    if (gateKeeperMode == false)
    {
        gateKeeperMode = true;
        std::cout << name << " is now guarding the gate. YOU SHALL NOT PASS!\n";
    }
    else
        std::cout << name << " is already guarding the gate.\n";
}