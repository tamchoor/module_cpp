#include "Fixed.hpp"

Fixed::Fixed(void)
{
	// std::cout << "Default constructor called" << std::endl;
	this->val = 0;
	return;
}

Fixed::Fixed(int const _val)
{
	// std::cout << "Int constructor called" << std::endl;
	this->val =(_val << Fixed::nbr_bits);
	return;
}

Fixed::Fixed(float const _val)
{
	// std::cout << "Float constructor called" << std::endl;
	this->val =  roundf(_val * (1 << Fixed::nbr_bits));
	return;
}

Fixed::Fixed(const Fixed & ref_Fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->val = ref_Fixed.getRawBits();
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->val;
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->val = raw;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
	return;
}

Fixed & Fixed::operator=(Fixed const & ref_Fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == & ref_Fixed) /*self-assignment guard*/
		return *this;
	
	std::cout << "ref_Fixed val = " << ref_Fixed.toFloat() << "\n";

	this->val = ref_Fixed.val;

	std::cout << "this val = " << this->toFloat() << "\n";

	return *this;
}

float	Fixed::toFloat(void) const
{
	return (float) this->val / (float) (1 << this->nbr_bits);
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


bool Fixed::operator>(Fixed const & _Fixed) const
{
	return this->val > _Fixed.val;
}

bool Fixed::operator<(Fixed const & _Fixed) const
{
	return this->val < _Fixed.val;
}

bool Fixed::operator>=(Fixed const & _Fixed) const
{
	return this->val >= _Fixed.val;
}

bool Fixed::operator<=(Fixed const & _Fixed) const
{
	return this->val <= _Fixed.val;
}

bool Fixed::operator==(Fixed const & _Fixed) const
{
	return this->val == _Fixed.val;
}

bool Fixed::operator!=(Fixed const & _Fixed) const
{
	return this->val != _Fixed.val;
}

Fixed Fixed::operator+(Fixed const & _Fixed)
{
	Fixed new_Fixed(*this);

	new_Fixed.setRawBits(this->val + _Fixed.val);
	return new_Fixed;
}

Fixed Fixed::operator-(Fixed const & _Fixed)
{
	Fixed new_Fixed(*this);

	new_Fixed.setRawBits(val - _Fixed.val);
	return new_Fixed;
}

Fixed Fixed::operator*(Fixed const & _Fixed)
{
	Fixed new_Fixed(*this);

	new_Fixed.setRawBits( (int)(this->val * _Fixed.val) / (1 << Fixed::nbr_bits));
	return new_Fixed;
}

Fixed Fixed::operator/(Fixed const & _Fixed)
{
	Fixed new_Fixed(*this);

	new_Fixed.setRawBits( (int)(this->val * (1 << Fixed::nbr_bits) / _Fixed.val));
	return new_Fixed;
}

Fixed Fixed::operator++(int)
{
	Fixed new_Fixed(*this);
	this->operator++();
	return (new_Fixed);
}

Fixed Fixed::operator++(void)
{
	this->val++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed new_Fixed(*this);
	this->operator--();
	return (new_Fixed);
}

Fixed Fixed::operator--(void)
{
	this->val--;
	return (*this);
}

Fixed & Fixed::min (Fixed &one, Fixed &two)
{
	if (one < two)
		return (one);
	return (two);
}

Fixed const & Fixed::min (Fixed const &one, Fixed const &two)
{
	if (one < two)
		return (one);
	return (two);
}

Fixed & Fixed::max (Fixed &one, Fixed &two)
{
	if (one > two)
		return (one);
	return (two);
}

Fixed const & Fixed::max (Fixed const &one, Fixed const &two)
{
	if (one > two)
		return (one);
	return (two);
}



