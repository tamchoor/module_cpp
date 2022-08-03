#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " constructed \n";
	return ;
}

ClapTrap::ClapTrap(const ClapTrap & ref_ClapTrap)  : _name(ref_ClapTrap._name), _hitPoints(ref_ClapTrap._hitPoints), _energyPoints(ref_ClapTrap._energyPoints), _attackDamage(ref_ClapTrap._attackDamage)
{
	std::cout << "ClapTrap " << this->_name << " copy constructed \n";

	return ;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & ref_ClapTrap)
{
	std::cout << "ClapTrap " << this->_name << " copy assignment  \n";
	if (this == &ref_ClapTrap)
		return *this;
	this->_name = ref_ClapTrap._name;
	this->_hitPoints = ref_ClapTrap._hitPoints;
	this->_energyPoints = ref_ClapTrap._energyPoints;
	this->_attackDamage = ref_ClapTrap._attackDamage;
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " destructed \n";
	return ;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is not attack " << ", hit points = " << this->_hitPoints << " \n";
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is not attack " << ", energy points = " << this->_energyPoints << " \n";
		return ;
	}
	if (this->_energyPoints < 1)
		this->_energyPoints = 0;
	else
		this->_energyPoints -= 1;

	
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage! \n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < amount)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	
	std::cout << "ClapTrap " << this->_name << " take damage " << amount << ", hit points = " << this->_hitPoints << " \n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is not repaire " << ", hit points = " << this->_hitPoints << " \n";
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is not repaire " << ", energy points = " << this->_energyPoints << " \n";
		return ;
	}
	if (this->_energyPoints < 1)
		this->_energyPoints = 0;
	else
		this->_energyPoints -= 1;
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " is repaire " << ", hit points = " << this->_hitPoints << " \n";
}

unsigned int ClapTrap::getEnergyPoint(void)
{
	return this->_energyPoints;
}

unsigned int ClapTrap::getHitPoint(void)
{
	return this->_hitPoints;
}

void ClapTrap::setAttackDamage(unsigned int damage)
{
	this->_attackDamage = damage;
}

unsigned int ClapTrap::getAttackDamage(void)
{
	return this->_attackDamage;
}

bool ClapTrap::checkAbilityToAct(void)
{
	if (this->getEnergyPoint() > 0 && this->getHitPoint() > 0)
		return true;
	return false;
}
