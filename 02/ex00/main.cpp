#include "Fixed.hpp"

#include <iostream>

int main( void )
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

/*
	std::cout << "d " << std::endl;
	Fixed d;
	d.setRawBits(1);
	std::cout << "d " << d.getRawBits() << std::endl;

	std::cout << "e " << std::endl;
	Fixed e(d);
	std::cout << "e " << e.getRawBits() << std::endl;

	std::cout << "f " << std::endl;
	Fixed f = e;
	std::cout << "f " << f.getRawBits() << std::endl;

	std::cout << "e " << std::endl;
	e.setRawBits(3);

	std::cout << "g " << std::endl;
	Fixed g;
	g = e;
	std::cout << "g " << g.getRawBits() << std::endl;
	g = d;
	std::cout << "g " << g.getRawBits() << std::endl;

	std::cout << "d " <<  d.getRawBits() << std::endl;
	std::cout << "e " << e.getRawBits() << std::endl;
	std::cout << "f " << f.getRawBits() << std::endl;
	std::cout << "g " << g.getRawBits() << std::endl;
*/
	return 0; 
}