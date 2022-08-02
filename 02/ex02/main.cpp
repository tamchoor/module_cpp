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
	std::cout << Fixed::max( a, b ) << std::endl;


	Fixed c(2.09f);

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
	
	return 0; 
}

