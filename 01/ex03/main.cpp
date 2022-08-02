#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	Weapon  club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();

    HumanB jim("Jim");
    jim.attack();
	Weapon club2 = Weapon("crude spiked club");
	// jim.setWeapon2(&club2);
    jim.setWeapon(club2);
    jim.attack();
    club2.setType("some other type of club");
    jim.attack();
	return (0);
}