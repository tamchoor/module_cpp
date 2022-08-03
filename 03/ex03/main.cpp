#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap Doo("Doo");
	DiamondTrap Boo("Boo");

	Doo.ShowHits();
	if (Doo.ScavTrap::checkAbilityToAct())
	{
		Doo.attack("Boo");
		Boo.ScavTrap::takeDamage(Doo.ScavTrap::getAttackDamage());
	}
	else
		Doo.attack("Woo");
	Doo.highFivesGuys();
	Doo.guardGate();
	Doo.whoAmI();
	Doo.ShowHits();
	if (Boo.ScavTrap::checkAbilityToAct())
	{
		Boo.attack("Doo");
		Doo.ScavTrap::takeDamage(Boo.ScavTrap::getAttackDamage());
	}
	else
		Boo.attack("Woo");

	Doo.ShowHits();
	return 0; 
}

