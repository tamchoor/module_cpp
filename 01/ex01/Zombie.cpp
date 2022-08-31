#include "Zombie.hpp"



Zombie::Zombie(void)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << ": destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_zombie_name(std::string name)
{
	this->name = name;
}
