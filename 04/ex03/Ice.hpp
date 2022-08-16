#ifndef ICE_HPP
#define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice(void);
		Ice(const Ice & ref_Ice);
		Ice	&operator=(Ice const & ref_Ice);
		~Ice(void);
		AMateria* clone() const;
		void use(ICharacter & target);

};

#endif