# include "AMateria.hpp"

AMateria::AMateria(void) : type(" ")
{
	std::cout << "AMateria constructor\n";
	return;
}

AMateria::AMateria(std::string const & _type) : type(_type)
{
	std::cout << "AMateria copy constructor\n";
	return;
}

AMateria & AMateria::operator=(const AMateria & ref_AMateria)
{
	std::cout << "AMateria assignement operator\n";
	if (this == &ref_AMateria)
		return *this;
	this->type = ref_AMateria.type;
	return *this;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor\n";
}

std::string const & AMateria::getType() const
{
	return this->type;
} //Returns the materia type

void AMateria::use(ICharacter& target)
{
	std::cout <<  "Using Amateria on " << target.getName() << "\n";
}
