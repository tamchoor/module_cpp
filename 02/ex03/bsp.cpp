
#include "Point.hpp"

bool is_this_triangle_exist(Point const &a, Point const &b, Point const &c)
{
	float square;
	float null_sqr = 0.0f;

	if (a == b || a == c || b == c)
		return false;
	square = ( a.get_x().toFloat() -  c.get_x().toFloat()) * ( b.get_y().toFloat() - c.get_y().toFloat()) - ( b.get_x().toFloat() -  c.get_x().toFloat()) * ( a.get_y().toFloat() -  c.get_y().toFloat()) ;
	if (square == null_sqr)
	{
		std::cout << "square = " << square << std::endl;
		return false;
	}
	return true;
}

float	calculete_side_from_line(Point const &one, Point const &two, Point const &point)
{
	float nbr = ( ( one.get_x().toFloat() -  point.get_x().toFloat()) * \
				( two.get_y().toFloat() -  one.get_y().toFloat()) - \
				( two.get_x().toFloat() -  one.get_x().toFloat()) * \
				( one.get_y().toFloat() -  point.get_y().toFloat()));
	return nbr;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (is_this_triangle_exist(a, b, c) == false)
	{
		std::cout << "is_this_triangle_exist = false" << std::endl;
		exit (1);
	}
	
	float null_nbr = 0.0f;
	float first_nbr;
	float second_nbr;
	float third_nbr;

	// Point d;
	// d =  a;
	// Point s(a);

	// std::cout << a.get_x().toFloat() << "= a x \n";
	// std::cout << a.get_y().toFloat() << "= a y \n";
	// std::cout << d.get_x().toFloat() << "= d x \n";
	// std::cout << d.get_y().toFloat() << "= d y \n";
	// std::cout << s.get_x().toFloat() << "= s x \n";
	// std::cout << s.get_y().toFloat() << "= s y \n";

	first_nbr = calculete_side_from_line(a, b, point);
	second_nbr = calculete_side_from_line(b, c, point);
	third_nbr = calculete_side_from_line(c, a, point);
	if ( (first_nbr > null_nbr && \
		second_nbr > null_nbr && \
		third_nbr > null_nbr) || \
		(first_nbr < null_nbr && \
		second_nbr < null_nbr && \
		third_nbr < null_nbr) )
		return true;

	return false;
}
