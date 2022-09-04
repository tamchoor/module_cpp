#include "Fixed.hpp"
#include <iostream>

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << " Fixed::max( a, b ) " << Fixed::max( a, b ) << std::endl;
	std::cout << " Fixed::min( a, b ) " << Fixed::min( a, b ) << std::endl;
	Fixed c(2.09f);
	std::cout << "c = " << c << std::endl;
	if (c == c)
		std::cout << "c == c" << std::endl;
	else 
		std::cout << "c != c" << std::endl;
	if (c == b)
		std::cout << "c == b" << std::endl;
	else 
		std::cout << "c != b" << std::endl;
	if (a == b)
		std::cout << "a == b" << std::endl;
	else 
		std::cout << "a != b" << std::endl;

	if (c > b)
		std::cout << "c > b" << std::endl;
	else 
		std::cout << "c < b" << std::endl;

	if (c < b)
		std::cout << "c < b" << std::endl;
	else 
		std::cout << "c > b" << std::endl;
	if (c <= c)
		std::cout << "c <= c" << std::endl;
	else 
		std::cout << "c > c" << std::endl;
	std::cout << --a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << c*b << std::endl;
	std::cout << c/c << std::endl;
	std::cout << c+b << std::endl;
	std::cout << c-c << std::endl;
	return 0; 
}
