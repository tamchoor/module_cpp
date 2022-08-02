#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
	return ;
}

Point::~Point(void)
{
	return ;
}

Point::Point(Fixed const	&_x, Fixed const	&_y) : x(_x), y(_y)
{
	return ;
}

Point::Point(Point const & ref_Point): x(ref_Point.x), y(ref_Point.y)
{
	// std::cout << "Copy constructor called point" << std::endl;
	return ;
}

Point & Point::operator=(Point const & ref_Point)
{
	// std::cout << "Copy assignment operator called point" << std::endl;
	if (this == & ref_Point)
		return *this;
	(Fixed) this->x = (Fixed)ref_Point.x;
	(Fixed) this->y = (Fixed)ref_Point.y;
	return *this;
}

bool Point::operator==(Point const &_Point) const
{
	if (this->x == _Point.x && this->y == _Point.y)
		return true;
	return false;
}

Fixed const &Point::get_x() const
{
	return this->x;
}

Fixed const &Point::get_y() const
{
	return this->y;
}

