#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
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

template <typename T>
std::ostream & operator<<(std::ostream & out, MutantStack<T> & ms)
{
	int i = 0;
	for (typename MutantStack<T>::iterator it = ms.begin(); it != ms.end(); it++)
	{
		if (i != 0)
			out << ", ";
		out << *it;
		i++;
	}
	return out;
}

#endif
