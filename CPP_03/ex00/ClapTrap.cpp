#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called!\n";
	_name = "Default";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 10;
}

ClapTrap::ClapTrap(std::string _name)
{
	std::cout << "Parameterized constructor called!\n";
	this->_name = _name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 10;
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
		_name = src._name;
		_hitPoints = src._hitPoints;
		_energyPoints = src._energyPoints;
		_attackDamage = src._attackDamage;
	}
	return (*this);       
}

void ClapTrap::attack(const std::string &_name)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << _name << ", causing " << _attackDamage << " points of damage!\n";
		_energyPoints--;
	}
	else if (_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " is not able to attack " << _name << ", cause he has no energy points left!\n";
	else
		std::cout << "ClapTrap " << this->_name << " is not able to attack " << _name << ", cause he has no hit points left!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > amount)
		_hitPoints -= amount;
	else if (_hitPoints > 0)
		_hitPoints = 0;
	else
	{
		std::cout << "Claptrap " << _name << " is alredy dead. STOP IT!\n";
		return ;
	}
	std::cout << "Claptrap " << _name << " was attacked and lost " << amount << " hit taken and he now has " << _hitPoints << " hit points\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0 && _hitPoints + amount <= 10)
	{
		_hitPoints += amount;
		_energyPoints--;
		std::cout << "Claptrap " << _name << " repaired itself and gained " << amount << " hp. Now he has " << _hitPoints << " hit points\n"; 
	}
	else if (_energyPoints == 0)
		std::cout << "Claptrap " << _name << " is discharged. Action terminated\n";
	else if (_hitPoints == 0)
		std::cout << "ClapTrap " << _name << " is dead. Repair will not save(so sad)\n";
	else
		std::cout << "ClapTrap " << _name << " can't be repaired to have more 10 hit points\n";
}