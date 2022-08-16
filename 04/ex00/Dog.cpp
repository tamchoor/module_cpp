#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Dog constructor\n";
	return;
}

Dog::Dog(const Dog  & ref_Dog)
{
	this->type = ref_Dog.type;
	std::cout << "Dog copy constructor\n";
	return;
}

Dog & Dog::operator=(const Dog & ref_Dog)
{
	std::cout << "Dog assignement operator\n";
	this->type = ref_Dog.type;
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor\n";
}

void Dog::makeSound(void) const
{
	std::cout << "Woof\n";
}
