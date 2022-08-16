#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public :
		WrongCat(void);
		WrongCat(const WrongCat & ref_WrongCat);
		WrongCat & operator=(const WrongCat & ref_WrongCat);

		~WrongCat(void);
		void makeSound(void) const;

} ;

#endif