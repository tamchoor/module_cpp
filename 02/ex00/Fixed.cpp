#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->val = 0;
	return;
}

Fixed::Fixed(const Fixed & ref_Fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->val = ref_Fixed.getRawBits();
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->val;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->val = raw;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed & Fixed::operator=(Fixed const & ref_Fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == & ref_Fixed) /*self-assignment guard*/
		return *this;
	
	this->val = ref_Fixed.getRawBits();
	return *this;
}
