#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	FragTrap Qoo("Qoo");
	FragTrap Woo("Woo");

	FragTrap Woo1("Woo1");
	Woo1 = Woo;

	FragTrap Qoo1 = Qoo;

	if (Qoo1.checkAbilityToAct())
	{
		Qoo1.attack("Woo");
		Woo.takeDamage(Qoo1.getAttackDamage());
	}
	else
		Qoo1.attack("Woo");

	Woo.beRepaired(1);
	Woo.highFivesGuys();


	return 0; 
}

