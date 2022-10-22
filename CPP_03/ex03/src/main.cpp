#include "../incl/DiamondTrap.hpp"

int main()
{
	{
		ClapTrap a;
		ClapTrap b("Chappi");

		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("chappi-clone");
		b.beRepaired(3);
	}
	{
		ScavTrap c;
		ScavTrap d("Bob");

		c.attack("Trap");
		for (int i = 0; i < 50; i++)
			c.attack("Trap");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(22);
		c.guardGate();
		c.guardGate();
		d.attack("Bob-clone");
		d.takeDamage(101);
		d.takeDamage(15);
		d.attack("Trap-clone");
	}
	{
		FragTrap e;
		FragTrap f("Jim");

		e.highFiveGuys();
		e.attack("dude");
		e.takeDamage(101);
		e.takeDamage(1);
		e.attack("zerg");
		f.highFiveGuys();
	}
	{
		DiamondTrap a;
		DiamondTrap b("PoroSad");
		DiamondTrap c(a);

		a.whoAmI();
		a.attack("monkagun");
		b.whoAmI();
		b.attack("kekw");
		c.whoAmI();
	}
	return (0);
}