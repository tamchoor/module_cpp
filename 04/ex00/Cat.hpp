#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public :
		Cat(void);
		Cat(const Cat & ref_Cat);
		Cat & operator=(const Cat & ref_Cat);
		~Cat(void);
		void makeSound(void) const;


	private :
};

#endif