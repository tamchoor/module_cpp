# include "FragTrap.hpp"

#define HIT_POINTS 100
#define ENERGI_POINTS 100
#define ATTACK_DAM 30

FragTrap::FragTrap() : ClapTrap()
{
	this->_hitPoints = HIT_POINTS;
	this->_energyPoints = ENERGI_POINTS;
	this->_attackDamage = ATTACK_DAM;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = HIT_POINTS;
	this->_energyPoints = ENERGI_POINTS;
	this->_attackDamage = ATTACK_DAM;
	std::cout << "FragTrap " << this->_name << " constructed \n";
	return;
}

FragTrap::FragTrap(const FragTrap & ref_FragTrap) : ClapTrap(ref_FragTrap)
{
	this->_name = ref_FragTrap._name;
	this->_hitPoints = ref_FragTrap._hitPoints;
	this->_energyPoints = ref_FragTrap._energyPoints;
	this->_attackDamage = ref_FragTrap._attackDamage;
	std::cout << "FragTrap " << this->_name << " copy constructed \n";
}

FragTrap & FragTrap::operator=(const FragTrap & ref_FragTrap)
{
	std::cout << "FragTrap " << this->_name << " copy assignment  \n";
	if (this == &ref_FragTrap)
		return *this;
	this->_name = ref_FragTrap._name;
	this->_hitPoints = ref_FragTrap._hitPoints;
	this->_energyPoints = ref_FragTrap._energyPoints;
	this->_attackDamage = ref_FragTrap._attackDamage;
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " destructed \n";
	return ;
}

void FragTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "FragTrap " << this->_name << " is not attack " << ", hit points = " << this->_hitPoints << " \n";
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "FragTrap " << this->_name << " is not attack " << ", energy points = " << this->_energyPoints << " \n";
		return ;
	}
	if (this->_energyPoints < 1)
		this->_energyPoints = 0;
	else
		this->_energyPoints -= 1;
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage! \n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "High five " << this->_name << std::endl;
}
