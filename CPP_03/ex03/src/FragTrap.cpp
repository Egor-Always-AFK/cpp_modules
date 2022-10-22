#include "../incl/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{ 
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << name << "FragTrap Default Constructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << name << "FragTrap CopyConstructor called\n";
}

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy)
{
	std::cout << name << " FragTrap Copy Constructor called!\n";
}

FragTrap::~FragTrap()
{
	std::cout << name << " FragTrap Destructor called!\n";
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	if (this != &src)
	{
		name = src.name;
		hitPoints = src.hitPoints;
		energyPoints = src.hitPoints;
		attackDamage = src.attackDamage;
	}
	std::cout << "FragTrap Assignation operator called!\n";
	return (*this);
}

void FragTrap::highFiveGuys(void)
{
	std::cout << name << " FragTrap wants to give you five. refusals are not accepted\n";
}