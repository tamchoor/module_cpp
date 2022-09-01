#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap & ref_FragTrap);
		FragTrap & operator=(const FragTrap & ref_FragTrap);
		~FragTrap(void);

		void highFivesGuys(void);
};

#endif