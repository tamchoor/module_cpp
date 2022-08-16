#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure constructor\n";
	return;
}

Cure::Cure(const Cure & ref_Cure) : AMateria(ref_Cure.getType())
{
	std::cout << "Cure copy constructor\n";
	return;
}

Cure	&Cure::operator=(Cure const & ref_Cure)
{
	std::cout << "Cure assignement operator\n";
	if (this == &ref_Cure)
		return *this;
	this->type = ref_Cure.type;
	return *this;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor\n";
}

AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter & target)
{
	std::cout << "Cure: * heals " << target.getName() << "’s wounds *\n";
}
