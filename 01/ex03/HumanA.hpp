#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA{
	public:
		void attack(void);
		HumanA(std::string name, Weapon & _weapon);
		~HumanA(void);
	private:
		std::string	name;
		Weapon		&weapon;
};

#endif