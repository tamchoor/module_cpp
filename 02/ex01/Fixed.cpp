#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->val = 0;
	return;
}

Fixed::Fixed(int const _val)
{
	std::cout << "Int constructor called" << std::endl;
	this->val =(_val << Fixed::nbr_bits);
	return;
}

Fixed::Fixed(float const _val)
{
	std::cout << "Float constructor called" << std::endl;
	this->val =  roundf(_val * (1 << Fixed::nbr_bits));
	return;
}

Fixed::Fixed(const Fixed & ref_Fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->val = ref_Fixed.getRawBits();
}

int	Fixed::getRawBits(void) const
{
	return this->val;
}

void	Fixed::setRawBits(int const raw)
{
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

float	Fixed::toFloat(void) const
{
	return (float) this->val / (float) (1 << Fixed::nbr_bits);
}

int	Fixed::toInt(void) const
{
	return this->val >> Fixed::nbr_bits;
}

std::ostream	& operator<<(std::ostream &out, Fixed const &ref_Fixed)
{
	out << ref_Fixed.toFloat();
	return (out);
}

