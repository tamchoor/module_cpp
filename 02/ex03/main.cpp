#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) 
{
	Point a(Fixed(1), Fixed(4));
	Point b(Fixed(10), Fixed(1));
	Point c(Fixed(10), Fixed(10));
	int a = 9;

	

	Point point(Fixed(9), Fixed(3));

	if (bsp(a, b, c, point) == true)
	{
		std::cout << "point is in the triangle" << std::endl;
	}
	else 
	{
		std::cout << "point is NOT in the triangle" << std::endl;

	}

	return 0; 
}

