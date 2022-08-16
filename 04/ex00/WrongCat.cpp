#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "WrongCat constructor\n";
	return;
}

WrongCat::WrongCat(const WrongCat  & ref_WrongCat)
{
	this->type = ref_WrongCat.type;
	std::cout << "WrongCat copy constructor\n";
	return;
}

WrongCat & WrongCat::operator=(const WrongCat & ref_WrongCat)
{
	std::cout << "WrongCat assignement operator\n";
	this->type = ref_WrongCat.type;
	return *this;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor\n";
}

void WrongCat::makeSound(void) const
{
	std::cout << "Meow\n";
}
