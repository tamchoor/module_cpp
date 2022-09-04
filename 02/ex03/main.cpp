#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) 
{
	Point a(1.0f, 4.0f);
	Point b(1.0f, 1.0f);
	Point c(2.0f, 2.0f);

	Point point(9.0f, 3.0f);

	if (bsp(a, b, c, point) == true)
	{
		std::cout << "point is in the triangle" << std::endl;
	}
	else 
	{
		std::cout << "point is NOT in the triangle" << std::endl;
	}

	Point a1(1.0f, 4.0f);
	Point b1(10.0f, 1.0f);
	Point c1(10.0f, 10.0f);
	if (bsp(a1, b1, c1, point) == true)
	{
		std::cout << "point is in the triangle" << std::endl;
	}
	else 
	{
		std::cout << "point is NOT in the triangle" << std::endl;
	}

	return 0; 
}

