#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap & ref_ClapTrap);
		ClapTrap & operator=(const ClapTrap & ref_ClapTrap);
		~ClapTrap(void);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		bool checkAbilityToAct(void);

		unsigned int getEnergyPoint(void);
		unsigned int getHitPoint(void);
		void		setAttackDamage(unsigned int damage);
		unsigned int getAttackDamage(void);

	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

};

#endif
