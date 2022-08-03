# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	this->_nameDiamond = name;
	std::cout << "DiamondTrap " << this->_nameDiamond << " constructed \n";
	return;
}

DiamondTrap::DiamondTrap(const DiamondTrap & ref_DiamondTrap) : ScavTrap(ref_DiamondTrap._nameDiamond + "_clap_name"), FragTrap(ref_DiamondTrap._nameDiamond + "_clap_name")
{
	std::cout << "DiamondTrap " << this->_nameDiamond << " copy constructed \n";
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & ref_DiamondTrap)
{
	std::cout << "DiamondTrap " << this->_nameDiamond << " copy assignment  \n";
	if (this == &ref_DiamondTrap)
		return *this;
	this->_nameDiamond = ref_DiamondTrap._nameDiamond;
	return *this;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_nameDiamond << " destructed \n";
	return ;
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap's name is " << this->_nameDiamond << " and ClapTrap's name is " << this->FragTrap::_name << std::endl;
}

void	DiamondTrap::ShowHits( void )
{
	std::cout << "DiamondTrap's name is " << this->_nameDiamond << std::endl;
	std::cout << "ClapTrap's name is " << this->FragTrap::_name << std::endl;
	std::cout << "_hitPoints is " << this->FragTrap::_hitPoints << std::endl;
	std::cout << "_energyPoints is " << this->ScavTrap::_energyPoints<< std::endl;
	std::cout << "_attackDamage name is " << this->FragTrap::_attackDamage << std::endl;
}

