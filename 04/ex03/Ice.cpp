#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
	std::cout << "Ice constructor\n";
	return;
}

Ice::Ice(const Ice & ref_Ice) : AMateria(ref_Ice.getType())
{
	std::cout << "Ice copy constructor\n";
	return;
}

Ice	&Ice::operator=(Ice const & ref_Ice)
{
	std::cout << "Ice assignement operator\n";
	if (this == &ref_Ice)
		return *this;
	this->type = ref_Ice.type;
	return *this;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor\n";
}

AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter & target)
{
	std::cout << "Ice : * shoots an ice bolt at " << target.getName() << " *\n";
}
