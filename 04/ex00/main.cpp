#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int	main( void )
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << meta->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	meta->makeSound();
	dog->makeSound();
	cat->makeSound();
	delete meta;
	delete dog;
	delete cat;

	const WrongAnimal *wrongcat = new WrongCat();
	std::cout << wrongcat->getType() << std::endl;
	wrongcat->makeSound();

	const WrongCat *wrongcat2 = new WrongCat();
	std::cout << wrongcat2->getType() << std::endl;
	wrongcat2->makeSound();
	delete wrongcat2;
	delete wrongcat;
	return 0;
}