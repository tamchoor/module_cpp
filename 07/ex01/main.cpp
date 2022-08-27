#include "iter.hpp"


// void fillInt(int & val)
// {
// 	val = 42;
// }

// void fillChar(char & val)
// {
// 	val = 42;
// }

// void printInt(int & val)
// {
// 	std::cout << val << std::endl;
// }

// void printChar(char & val)
// {
// 	std::cout << val << std::endl;
// }

template <typename T>
void fillVal(T & val)
{
	val = 42;
}

template <typename T>
void printVal(T & val)
{
	std::cout << val << std::endl;
}

int main( void )
{
	int size = 6;
	int intArr[size];
	char charArr[size];

	// iter(intArr, size, &fillInt);
	// iter(intArr, size, &printInt);

	// iter(charArr, size, &fillChar);
	// iter(charArr, size, &printChar);

	iter(intArr, size, &fillVal);
	iter(intArr, size, &printVal);

	iter(charArr, size, &fillVal);
	iter(charArr, size, &printVal);


	return 0;
}
