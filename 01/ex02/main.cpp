#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string& stringREF = str;
	

	std::cout << "str address : " << &str << std::endl;
	std::cout << "stringPTR address : " << stringPTR << std::endl;
	std::cout << "stringREF address : " << &stringREF << std::endl;

	std::cout << "str value : " << str << std::endl;
	std::cout << "stringPTR value : " << *stringPTR << std::endl;
	std::cout << "stringREF value : " << stringREF << std::endl;

	// std::string new_str = str;
	// std::cout << "new str address : " << &new_str << std::endl;
	// std::cout << "new str value : " << new_str << std::endl;

	// str = "AAA";
	// std::cout << "str address : " << &str << std::endl;
	// std::cout << "stringPTR address : " << stringPTR << std::endl;
	// std::cout << "stringREF address : " << &stringREF << std::endl;

	// std::cout << "str value : " << str << std::endl;
	// std::cout << "stringPTR value : " << *stringPTR << std::endl;
	// std::cout << "stringREF value : " << stringREF << std::endl;

	// std::cout << "new str address : " << &new_str << std::endl;
	// std::cout << "new str value : " << new_str << std::endl;
	return (0);
}