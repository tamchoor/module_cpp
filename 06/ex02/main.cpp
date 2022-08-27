#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <random>
#include <iostream>

Base * generate(void)
{
	std::random_device random_device; // Источник энтропии.
	std::mt19937 generator(random_device()); // Генератор случайных чисел.
	// (Здесь берется одно инициализирующее значение, можно брать больше)

	std::uniform_int_distribution<> distribution(0, 2); // Равномерное распределение [0, 3]
	int x = distribution(generator);
	switch (x)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return NULL;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	Base a;
	Base b;
	Base c;
	try
	{
		a = dynamic_cast<A&> (p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception & e)
	{

	}
	try
	{
		b = dynamic_cast<B&> (p);
		std::cout << "B" << std::endl;
	}
	catch(std::exception & e)
	{

	}
	try
	{
		c = dynamic_cast<C&> (p);
		std::cout << "C" << std::endl;
	}
	catch(std::exception & e)
	{

	}
}

int main()
{
	Base * ptr;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	return (0);
}