#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &_weapon) : weapon(_weapon)
{
	this->name = name;
}

HumanA::~HumanA(void)
{
	return;
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " \
				<< this->weapon.getType() << std::endl;
}