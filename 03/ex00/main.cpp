#include "ClapTrap.hpp"

int main( void ) 
{
	ClapTrap Qoo("Qoo");
	ClapTrap Woo("Woo");

	Qoo.setAttackDamage(5);
	if (Qoo.checkAbilityToAct())
	{
		Qoo.attack("Woo");
		Woo.takeDamage(Qoo.getAttackDamage());
	}
	else
		Qoo.attack("Woo");

	Woo.beRepaired(1);
	if (Qoo.checkAbilityToAct())
	{
		Qoo.attack("Woo");
		Woo.takeDamage(Qoo.getAttackDamage());
	}
	else
		Qoo.attack("Woo");

	Woo.beRepaired(1);
	if (Qoo.checkAbilityToAct())
	{
		Qoo.attack("Woo");
		Woo.takeDamage(Qoo.getAttackDamage());
	}
	else
		Qoo.attack("Woo");

	if (Woo.checkAbilityToAct())
	{
		Woo.attack("Qoo");
		Qoo.takeDamage(Woo.getAttackDamage());
	}
	else
		Woo.attack("Woo");

	Qoo.beRepaired(1);
	Qoo.beRepaired(1);
	Qoo.beRepaired(1);
	Qoo.beRepaired(1);
	Qoo.beRepaired(1);
	Qoo.beRepaired(1);
	Qoo.beRepaired(1);
	Qoo.beRepaired(1);

	Woo.beRepaired(1);
	if (Qoo.checkAbilityToAct())
	{
		Qoo.attack("Woo");
		Woo.takeDamage(Qoo.getAttackDamage());
	}
	else
		Qoo.attack("Woo");
	return 0; 
}

