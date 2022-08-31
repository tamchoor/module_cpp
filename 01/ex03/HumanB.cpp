#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->weapon = nullptr;
	this->name = name;
}

HumanB::~HumanB(void)
{
	return ;
}

void HumanB::attack(void)
{
	if (this->weapon != nullptr)
		std::cout << this->name << " attacks with their " \
					<< this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " has not weapon" << std::endl;
}

void HumanB::setWeapon2(Weapon *weapon)
{
	this->weapon = weapon;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
