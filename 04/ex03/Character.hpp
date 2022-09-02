#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

#define SLOTS 4

class Character : public ICharacter
{
	public:
		Character(void);
		Character(std::string const name);
		Character(const Character & ref_Character);
		Character	&operator=(Character const & ref_Character);
		~Character(void);
		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter & target);
		
	private:
		std::string	name;
		AMateria	**inventory;
};

#endif