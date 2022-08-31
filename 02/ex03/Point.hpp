#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point{
	public:
		Point();
		Point(float const	_x, float const	_y);
		Point(Fixed const	&_x, Fixed const	&_y);
		Point(Point const & ref_Point);
		Point & operator=(Point const & ref_Point);
		bool operator==(Point const &other) const;

		~Point();

		Fixed const & get_x() const;
		Fixed const & get_y() const;

	private:
		Fixed const	x;
		Fixed const	y;
};

#endif