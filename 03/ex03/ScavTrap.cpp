# include "ScavTrap.hpp"

#define HIT_POINTS 100
#define ENERGI_POINTS 50
#define ATTACK_DAM 20

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hitPoints = HIT_POINTS;
	this->_energyPoints = ENERGI_POINTS;
	this->_attackDamage = ATTACK_DAM;
	std::cout << "ScavTrap " << this->_name << " constructed \n";
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = HIT_POINTS;
	this->_energyPoints = ENERGI_POINTS;
	this->_attackDamage = ATTACK_DAM;
	std::cout << "ScavTrap " << this->_name << " constructed \n";
	return;
}

ScavTrap::ScavTrap(const ScavTrap & ref_ScavTrap) : ClapTrap(ref_ScavTrap)
{
	this->_name = ref_ScavTrap._name;
	this->_hitPoints = ref_ScavTrap._hitPoints;
	this->_energyPoints = ref_ScavTrap._energyPoints;
	this->_attackDamage = ref_ScavTrap._attackDamage;
	std::cout << "ScavTrap " << this->_name << " copy constructed \n";
}

ScavTrap & ScavTrap::operator=(const ScavTrap & ref_ScavTrap)
{
	std::cout << "ScavTrap " << this->_name << " copy assignment  \n";
	if (this == &ref_ScavTrap)
		return *this;
	this->_name = ref_ScavTrap._name;
	this->_hitPoints = ref_ScavTrap._hitPoints;
	this->_energyPoints = ref_ScavTrap._energyPoints;
	this->_attackDamage = ref_ScavTrap._attackDamage;
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " destructed \n";
	return ;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is not attack " << ", hit points = " << this->_hitPoints << " \n";
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is not attack " << ", energy points = " << this->_energyPoints << " \n";
		return ;
	}
	if (this->_energyPoints < 1)
		this->_energyPoints = 0;
	else
		this->_energyPoints -= 1;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage! \n";
}

void ScavTrap::guardGate()
{
	std::cout	<< "ScavTrap " << this->_name << " is now in Gate keeper mode.\n";
}
