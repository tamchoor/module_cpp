# include <iostream>

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("")
{
	std::cout << "WrongAnimal constructor\n";
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal & ref_WrongAnimal) : type(ref_WrongAnimal.type)
{
	std::cout << "WrongAnimal copy constructor\n";
	return;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & ref_WrongAnimal)
{
	std::cout << "WrongAnimal assignement operator\n";
	this->type = ref_WrongAnimal.type;
	return *this;
}

WrongAnimal:: ~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor\n";
}

const std::string	&WrongAnimal::getType( void ) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Animal sound\n";
}
