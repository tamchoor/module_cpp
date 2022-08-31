#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "Dog constructor\n";
	return;
}

Dog::Dog(const Dog  & ref_Dog)
{
	this->type = ref_Dog.type;
	this->brain = new Brain(*(ref_Dog.brain));
	std::cout << "Dog copy constructor\n";
	return;
}

Dog & Dog::operator=(const Dog & ref_Dog)
{
	if (this->brain == ref_Dog.brain)
		return *this;
	std::cout << "Dog assignement operator\n";
	this->type = ref_Dog.type;
	delete this->brain;
	this->brain = new Brain(*(ref_Dog.brain));
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor\n";
	delete this->brain;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof\n";
}
