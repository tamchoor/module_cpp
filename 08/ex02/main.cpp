#include <iostream>
#include <string>
#include <list>
#include "MutantStack.hpp"

int main(void)
{

	try
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
		++it; }
		std::stack<int> s(mstack);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	MutantStack<int> mstack;

	mstack.push(15);
	mstack.push(215);
	mstack.push(16);
	std::cout << "top : " << mstack.top() << std::endl;
	mstack.push(21);
	std::cout << "top : " << mstack.top() << std::endl;
	std::cout << "size : " << mstack.size() << std::endl;
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
	{
		std::cout << "value : " << *it << std::endl;
	}
	MutantStack<int> cmstack(mstack);
	for (MutantStack<int>::iterator it = cmstack.begin(); it != cmstack.end(); it++)
	{
		std::cout << "value c: " << *it << std::endl;
	}
	MutantStack<int> camstack = mstack;
	for (MutantStack<int>::iterator it = camstack.begin(); it != camstack.end(); it++)
	{
		std::cout << "value ca: " << *it << std::endl;
	}

	return 0;
}