#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
	public :
		Fixed(void);
		Fixed(const Fixed & ref_Fixed);
		Fixed & operator=(Fixed const & ref_Fixed);
		~Fixed(void);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private :
		int					val;
		static const int	nbr_bits;
};

#endif