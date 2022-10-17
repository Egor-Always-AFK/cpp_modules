#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called!\n";
	name = "Default";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 10;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Parameterized constructor called!\n";
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 10;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called!\n";
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called!\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	if (this != &src)
	{
		std::cout << "Assignation operator called!\n";
		name = src.name;
		hitPoints = src.hitPoints;
		energyPoints = src.energyPoints;
		attackDamage = src.attackDamage;
	}
	return (*this);       
}

void ClapTrap::attack(const std::string &name)
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

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > amount)
		hitPoints -= amount;
	else if (hitPoints > 0)
		hitPoints = 0;
	else
	{
		std::cout << "Claptrap " << name << " is alredy dead. STOP IT!\n";
		return ;
	}
	std::cout << "Claptrap " << name << " was attacked and lost " << amount << " hit taken and he now has " << hitPoints << " hit points\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0 && hitPoints > 0 && hitPoints + amount <= 10)
	{
		hitPoints += amount;
		energyPoints--;
		std::cout << "Claptrap " << name << " repaired itself and gained " << amount << " hp. Now he has " << hitPoints << " hit points\n"; 
	}
	else if (energyPoints == 0)
		std::cout << "Claptrap " << name << " is discharged. Action terminated\n";
	else if (hitPoints == 0)
		std::cout << "ClapTrap " << name << " is dead. Repair will not save(so sad)\n";
	else
		std::cout << "ClapTrap " << name << " can't be repaired to have more 10 hit points\n";
}