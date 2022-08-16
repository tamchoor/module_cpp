#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public :
		Dog(void);
		Dog(const Dog & ref_Dog);
		Dog & operator=(const Dog & ref_Dog);

		~Dog(void);
		void makeSound(void) const;

	private :
		Brain	*brain;
};

#endif