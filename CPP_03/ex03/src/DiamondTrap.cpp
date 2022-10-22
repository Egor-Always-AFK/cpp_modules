#include "../incl/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name")
{
	name = "default diamond";
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap Default constructor called!\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	this->name = name;
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap Parameterized constructor called!\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy) : ClapTrap(cpy), ScavTrap(cpy), FragTrap(cpy)
{
	if (this != &cpy)
		*this = cpy;
	std::cout << "DiamondTrap Copy Constructor called!\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Oh no. DiamondTrap " << name << " s being destroyed. very sad\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	name = src.name + "_clap_name";
	hitPoints = src.hitPoints;
	energyPoints = src.energyPoints;
	attackDamage = src.attackDamage;

	return (*this);
}

void DiamondTrap::attack(const std::string name)
{
	ScavTrap::attack(name);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "Hello. My name is " << name << " and my dad (or mom idk) is called " << ClapTrap::name << std::endl; 
}