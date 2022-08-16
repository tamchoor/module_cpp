#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "Cat constructor\n";
	return;
}

Cat::Cat(const Cat  & ref_Cat)
{
	this->type = ref_Cat.type;
	this->brain = new Brain(*(ref_Cat.brain));
	std::cout << "Cat copy constructor\n";
	return;
}

Cat & Cat::operator=(const Cat & ref_Cat)
{
	std::cout << "Cat assignement operator\n";
	this->type = ref_Cat.type;
	this->brain = ref_Cat.brain;
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor\n";
	delete this->brain;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow\n";
}
