#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <cmath>
#include <iterator>

class Span
{
	public:
		Span(unsigned int N);
		Span(const Span & ref);
		Span & operator= (const Span & ref);
		~Span();

		void	addNumber(int nbr);
		void	addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
		int		longestSpan();
		int		shortestSpan();
		std::vector<int> get_vec() const;

	private:
		std::vector<int>	_vec;

		Span();
};

std::ostream & operator<< (std::ostream & out, const Span & s);

#endif