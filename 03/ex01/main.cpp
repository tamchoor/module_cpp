#include "ScavTrap.hpp"


int main( void ) 
{
	ScavTrap Qoo("Qoo");
	ScavTrap Woo("Woo");

	ScavTrap Qoo1 = Qoo;

	if (Qoo1.checkAbilityToAct())
	{
		Qoo1.attack("Woo");
		Woo.takeDamage(Qoo1.getAttackDamage());
	}
	else
		Qoo1.attack("Woo");

	Woo.beRepaired(1);
	Woo.guardGate();

	ScavTrap Woo1("Woo1");
	Woo1 = Woo;
	Woo1.beRepaired(20);

	return 0; 
}

