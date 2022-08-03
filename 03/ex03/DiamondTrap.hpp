#ifndef DIAMOND_HPP
# define DIAMOND_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap :  public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap & ref_DiamondTrap);
		DiamondTrap & operator=(const DiamondTrap & ref_DiamondTrap);
		~DiamondTrap(void);

		
		using		FragTrap::_hitPoints;
		using		ScavTrap::_energyPoints;
		using		FragTrap::_attackDamage;
		using	ScavTrap::attack;
		void	whoAmI( void );
		void	ShowHits( void );

	private:
		std::string	_nameDiamond;
		
		
};

#endif
