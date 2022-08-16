#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal {

	public :
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal & ref_Animal);
		WrongAnimal & operator=(const WrongAnimal & ref_WrongAnimal);
		~WrongAnimal(void);

		const std::string &getType( void ) const;


		void makeSound(void) const;
	protected :
		std::string type;

} ;

#endif
