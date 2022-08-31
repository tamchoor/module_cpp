#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria & operator=(const AMateria & ref_AMateria);
		virtual ~AMateria(void);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string type;
};

#endif