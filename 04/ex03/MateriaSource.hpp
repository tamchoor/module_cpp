#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource :  public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & source);
		MateriaSource	&operator=(MateriaSource const & source);
		~MateriaSource(void);
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);

	private:
			AMateria	**materia_source;

};

#endif