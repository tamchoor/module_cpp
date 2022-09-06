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
		mstack.push(3); mstack.push(5); mstack.push(737); 
		mstack.push(0);
		std::cout << mstack << std:: endl;
		MutantStack<int>::iterator it = mstack.begin(); 
		MutantStack<int>::iterator ite = mstack.end();
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
	
	{
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
		MutantStack<int> camstack;
		camstack = mstack;
		for (MutantStack<int>::iterator it = camstack.begin(); it != camstack.end(); it++)
		{
			std::cout << "value ca: " << *it << std::endl;
		}
	}

	{
		std::cout << "MUTANTSTACK" << std::endl;

		MutantStack<int>    mstack;

		mstack.push(5);
		mstack.push(99);

		std::cout << "TOP : " << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "SIZE : " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		while(it != ite){
			std::cout << *it << std::endl;
			++it;
		}
		
		std::stack<int> s(mstack);

		std::cout << "\nLIST" << std::endl;


		std::list<int>    list;

		list.push_back(5);
		list.push_back(99);

		std::cout << "TOP = " << list.back() << std::endl;

		list.pop_back();

		std::cout << "Size = " << list.size() << std::endl;

		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(0);

		std::list<int>::iterator itlist = list.begin();
		std::list<int>::iterator itliste = list.end();

		++itlist;
		--itlist;

		while(itlist != itliste){
			std::cout << *itlist << std::endl;
			++itlist;
		}
		
		std::list<int> s2(list);

		std::cout << "\nMUTANTSTACK reverse" << std::endl;

		MutantStack<int>::reverse_iterator rit = mstack.rbegin();
		MutantStack<int>::reverse_iterator rite = mstack.rend();

		++rit;
		--rit;

		while(rit != rite){
			std::cout << *rit << std::endl;
			++rit;
		}

		std::cout << "\nLIST reverse" << std::endl;
		
		std::list<int>::reverse_iterator ritlist = list.rbegin();
		std::list<int>::reverse_iterator ritliste = list.rend();

		++ritlist;
		--ritlist;

		while(ritlist != ritliste){
			std::cout << *ritlist << std::endl;
			++ritlist;
		}
		
	}
	
	return 0;
}