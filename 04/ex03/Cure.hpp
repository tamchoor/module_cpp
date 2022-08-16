#ifndef CURE_HPP
#define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure(void);
		Cure(const Cure & ref_Cure);
		Cure	&operator=(Cure const & ref_Cure);
		~Cure(void);
		AMateria* clone() const;
		void use(ICharacter & target);

};

#endif