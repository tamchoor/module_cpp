#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap{
	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap & ref_ScavTrap);
		ScavTrap & operator=(const ScavTrap & ref_ScavTrap);
		~ScavTrap(void);

		void attack(const std::string& target);
		void guardGate(void);
};

#endif