#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{
	public :
		FragTrap(std::string name);
		FragTrap(const FragTrap & ref_FragTrap);
		FragTrap & operator=(const FragTrap & ref_FragTrap);
		~FragTrap(void);

		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif