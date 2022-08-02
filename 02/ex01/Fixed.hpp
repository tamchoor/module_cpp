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
		
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private :
		int					val;
		static const int	nbr_bits = 8;
};

std::ostream	& operator<<(std::ostream &out, Fixed const &ref_Fixed);


#endif