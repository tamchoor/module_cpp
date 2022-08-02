#include "Zombie.hpp"

int main(void)
{
	Zombie Loo;
	Loo.set_zombie_name("Loo");
	Loo.announce();

	int N = 10;
	Zombie *JooHorde = zombieHorde(N, "Joo");
	if (N > 0)
	{
		for (int i = 0; i < N; i++)
		{
			JooHorde[i].announce();
		}
		delete[] JooHorde;
	}
	return (0);
}