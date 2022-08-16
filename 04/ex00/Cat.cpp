#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Cat constructor\n";
	return;
}

Cat::Cat(const Cat  & ref_Cat)
{
	this->type = ref_Cat.type;
	std::cout << "Cat copy constructor\n";
	return;
}

Cat & Cat::operator=(const Cat & ref_Cat)
{
	std::cout << "Cat assignement operator\n";
	this->type = ref_Cat.type;
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor\n";
}

void Cat::makeSound(void) const
{
	std::cout << "Meow\n";
}
