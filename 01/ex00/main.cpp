#include "Zombie.hpp"

int main(void)
{
	Zombie Loo = Zombie("Loo");

	std::string name = "Joo";
	randomChump(name);

	Zombie Boo = Zombie("Boo");
	Boo.announce();

	Zombie *Zoo = newZombie("Zoo");

	Zombie Foo = Zombie("Foo");

	Zoo->announce();
	delete Zoo;
	return (0);
}