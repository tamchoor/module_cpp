#include "Animal.hpp"

Animal::Animal(void) : type("")
{
	std::cout << "Animal constructor\n";
	return;
}

Animal::Animal(const Animal & ref_Animal) : type(ref_Animal.type)
{
	std::cout << "Animal copy constructor\n";
	return;
}

Animal & Animal::operator=(const Animal & ref_Animal)
{
	std::cout << "Animal assignement operator\n";
	if (this == &ref_Animal)
		return *this;
	this->type = ref_Animal.type;
	return *this;
}

Animal:: ~Animal(void)
{
	std::cout << "Animal destructor\n";
}

const std::string	&Animal::getType( void ) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound\n";
}
