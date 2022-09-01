# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	this->_name = name;
	std::cout << "DiamondTrap " << this->_name << " constructed \n";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_attackDamage = ScavTrap::_attackDamage;
	this->_energyPoints = FragTrap::_energyPoints;
	return;
}

DiamondTrap::DiamondTrap(const DiamondTrap & ref_DiamondTrap) : 
			ClapTrap(ref_DiamondTrap._name + "_clap_name"),
			ScavTrap(ref_DiamondTrap._name + "_clap_name"), 
			FragTrap(ref_DiamondTrap._name + "_clap_name")
			
{
	std::cout << "DiamondTrap " << this->_name << " copy constructed \n";
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & ref_DiamondTrap)
{
	std::cout << "DiamondTrap " << this->_name << " copy assignment  \n";
	if (this == &ref_DiamondTrap)
		return *this;
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
	std::cout << "_hitPoints is " << this->FragTrap::_hitPoints << std::endl;
	std::cout << "_hitPoints1 is " << this->_hitPoints << std::endl;
	std::cout << "_energyPoints is " << this->ScavTrap::_energyPoints<< std::endl;
	std::cout << "_energyPoints1 is " << this->_energyPoints<< std::endl;
	std::cout << "_attackDamage name is " << this->FragTrap::_attackDamage << std::endl;
	std::cout << "_attackDamage1 name is " << this->_attackDamage << std::endl;
}

