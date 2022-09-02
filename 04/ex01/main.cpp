#include "Cat.hpp"
#include "Dog.hpp"


int	main( void )
{
	// const Animal* meta = new Animal();
	// const Animal* dog = new Dog();
	// const Animal* cat = new Cat();

	// std::cout << meta->getType() << std::endl;
	// std::cout << dog->getType() << std::endl;
	// std::cout << cat->getType() << std::endl;
	// meta->makeSound();
	// dog->makeSound();
	// cat->makeSound();
	// delete meta;
	// delete dog;
	// delete cat;

	
	Dog dog1;
	dog1.fillBrain("dog idea 1");
	dog1.printBrain();
	dog1.printAddressBrain();
	{
		Dog dog2 = dog1;
		dog2.makeSound();
		dog2.printBrain();
		dog2.printAddressBrain();
		dog2.fillBrain("dog idea 2");
		dog2.printBrain();
	}
	{
		Dog dog3;
		dog3 = dog1;
		dog3.makeSound();
		dog3.printAddressBrain();
	}
	dog1.makeSound();
	dog1.printAddressBrain();
	dog1.printBrain();

	// const Animal* meta1[10];
	// for (int i = 0; i < 5; i++)
	// {
	// 	meta1[i] = new Dog();
	// }
	// for (int i = 5; i < 10; i++)
	// {
	// 	meta1[i] = new Cat();
	// }
	// for (int i = 9; i >= 0; i--)
	// {
	// 	delete meta1[i];
	// }

	return 0;
}