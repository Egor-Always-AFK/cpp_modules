#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		virtual ~ClapTrap();

		ClapTrap &operator=(const ClapTrap &src);

		void attack(const std::string &name);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};