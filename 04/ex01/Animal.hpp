#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public :
		Animal(void);
		Animal(const Animal & ref_Animal);
		Animal & operator=(const Animal & ref_Animal);
		virtual ~Animal(void);

		const std::string &getType( void ) const;


		virtual void makeSound(void) const;
	protected :
		std::string type;

};

#endif