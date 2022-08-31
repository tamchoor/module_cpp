#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
# include <cmath>

class Fixed{
	public :
		Fixed(void);
		Fixed(int const _val);
		Fixed(float const _val);
		Fixed(const Fixed & ref_Fixed);
		float toFloat(void) const;
		int toInt(void) const;
		Fixed & operator=(Fixed const & ref_Fixed);
		~Fixed(void);

		bool operator>(Fixed const & _Fixed) const;
		bool operator<(Fixed const & _Fixed) const;
		bool operator>=(Fixed const & _Fixed) const;
		bool operator<=(Fixed const & _Fixed) const;
		bool operator==(Fixed const & _Fixed) const;
		bool operator!=(Fixed const & _Fixed) const;

		Fixed operator+(Fixed const & _Fixed);
		Fixed operator-(Fixed const & _Fixed);
		Fixed operator*(Fixed const & _Fixed);
		Fixed operator/(Fixed const & _Fixed);

		Fixed operator++(int);
		Fixed operator++(void);
		Fixed operator--(int);
		Fixed operator--(void);

		static Fixed & min (Fixed &one, Fixed &two);
		static Fixed const & min (Fixed const &one, Fixed const &two);
		static Fixed & max (Fixed &one, Fixed &two);
		static Fixed const & max (Fixed const &one, Fixed const &two);
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private :
		int					val;
		static const int	nbr_bits = 8;
};

std::ostream	& operator<<(std::ostream &out, Fixed const &ref_Fixed);

#endif
