#include "MateriaSource.hpp"
#include "Character.hpp"


MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource constructor\n";
	this->materia_source = new AMateria*[SLOTS];
	for (int i = 0; i < SLOTS; i++)
	{
		this->materia_source[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const & ref_MSource)
{
	std::cout << "MateriaSource copy constructor\n";
	this->materia_source = new AMateria*[SLOTS];
	for (int i = 0; i < SLOTS; i++)
	{
		this->materia_source[i] = ref_MSource.materia_source[i]->clone();
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const & ref_MSource)
{
	std::cout << "MateriaSource assignement operator\n";
	if (this == &ref_MSource)
		return *this;
	for (int i = 0; i < SLOTS; i++)
	{
		if (this->materia_source[i])
			delete materia_source[i];
		materia_source[i] = ref_MSource.materia_source[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor\n";
	for (int i = 0; i < SLOTS; i++)
	{
		if (this->materia_source[i])
			delete materia_source[i];
	}
	delete [] materia_source;
}

void MateriaSource::learnMateria(AMateria *m)
{
	int	i;

	if (!m)
		return ;
	i = 0;
	while (i < SLOTS)
	{
		if (!materia_source[i])
		{
			materia_source[i] = m;
			return ;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	i;

	for (i = 0; i < SLOTS; i++)
	{
		if (materia_source[i] && materia_source[i]->getType() == type)
			return materia_source[i]->clone();
	}
	return NULL;
}
