# include "DiamondTrap.hpp"

#define HIT_POINTS 100
#define ENERGI_POINTS 50
#define ATTACK_DAM 30

DiamondTrap::DiamondTrap() : ScavTrap(),  FragTrap()
{
	ClapTrap::_name = "noname_clap_name";
	this->_name = "noname";
	this->FragTrap::_hitPoints = HIT_POINTS;
	this->ScavTrap::_energyPoints = ENERGI_POINTS;
	this->FragTrap::_attackDamage = ATTACK_DAM;
	std::cout << "DiamondTrap " << this->_name << " constructed \n";
	return;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name),  FragTrap(name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->FragTrap::_hitPoints = HIT_POINTS;
	this->ScavTrap::_energyPoints = ENERGI_POINTS;
	this->FragTrap::_attackDamage = ATTACK_DAM;
	std::cout << "DiamondTrap " << this->_name << " constructed \n";
	return;
}

DiamondTrap::DiamondTrap(const DiamondTrap & ref_DiamondTrap)
{
	ClapTrap::_name = ref_DiamondTrap._name + "_clap_name";
	this->_name = ref_DiamondTrap._name;
	this->_hitPoints = ref_DiamondTrap._hitPoints;
	this->_attackDamage = ref_DiamondTrap._attackDamage;
	this->_energyPoints = ref_DiamondTrap._energyPoints;
	std::cout << "DiamondTrap " << this->_name << " copy constructed \n";
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & ref_DiamondTrap)
{
	std::cout << "DiamondTrap " << this->_name << " copy assignment  \n";
	if (this == &ref_DiamondTrap)
		return *this;
	ClapTrap::_name = ref_DiamondTrap._name + "_clap_name";
	this->_name = ref_DiamondTrap._name;
	this->_hitPoints = ref_DiamondTrap._hitPoints;
	this->_attackDamage = ref_DiamondTrap._attackDamage;
	this->_energyPoints = ref_DiamondTrap._energyPoints;
	return *this;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " destructed \n";
	return ;
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap's name is " << this->_name << " and ClapTrap's name is " << this->ClapTrap::_name << std::endl;
}

void	DiamondTrap::ShowHits( void )
{
	std::cout << "DiamondTrap's name is " << this->_name << std::endl;
	std::cout << "ClapTrap's name is " << this->ClapTrap::_name << std::endl;
	std::cout << "_hitPoints is " << this->_hitPoints << std::endl;
	std::cout << "_energyPoints is " << this->_energyPoints<< std::endl;
	std::cout << "_attackDamage name is " << this->_attackDamage << std::endl;
}
