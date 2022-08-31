#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
// #include <string.h>
#include <stack>


template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>()
		{
		};
		MutantStack(MutantStack const & ref) : std::stack<T>(ref)
		{
		};
		MutantStack		&operator=(MutantStack const &ref)
		{
			std::stack<T>::operator=(ref);
			return *this;
		};

		~MutantStack() {
		};

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator	begin(void) 
		{
			return this->c.begin();
		};
		iterator	end(void) 
		{
			return this->c.end();
		};
		const_iterator	cbegin(void) 
		{
			return this->c.cbegin();
		};
		const_iterator	cend(void) 
		{
			return this->c.cend();
		};
		reverse_iterator	rbegin(void) 
		{
			return this->c.rbegin();
		};
		reverse_iterator	rend(void) 
		{
			return this->c.rend();
		};
		const_reverse_iterator	crbegin(void) 
		{
			return this->c.crbegin();
		};
		const_reverse_iterator	crend(void) 
		{
			return this->c.crend();
		};
};

#endif