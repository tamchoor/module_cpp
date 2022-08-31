#include "Cat.hpp"
#include "Dog.hpp"


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

	
	Dog dog1;
	{
		Dog dog2 = dog1;
		dog2.makeSound();
	}
	{
		Dog dog3;
		dog3 = dog1;
		dog3.makeSound();
	}
	dog1.makeSound();
	return 0;
}