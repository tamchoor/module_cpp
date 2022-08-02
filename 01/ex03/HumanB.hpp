#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB{
	public:
		void attack(void);
		HumanB(std::string name);
		~HumanB(void);
		void setWeapon(Weapon &weapon);
		void setWeapon2(Weapon *weapon);
	private:
		std::string	name;
		Weapon		*weapon;

};

#endif