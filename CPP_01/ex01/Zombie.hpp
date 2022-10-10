#pragma once
#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce(void) const;
		void setName(std::string name);
	private:
		std::string name;
	
};

Zombie *zombieHorde(int N, std::string name);