#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
	private:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;

	public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();

	ClapTrap &operator=(const ClapTrap &src);


	void attack(const std::string &name);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};