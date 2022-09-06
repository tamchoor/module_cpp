#include "Span.hpp"

Span::Span( unsigned int N )
{
	_vec.reserve(N);
}

Span::Span( const Span & ref )
{
	_vec = ref._vec;
}

Span & Span::operator=( const Span & ref)
{
	if (this == &ref)
		return *this;
	_vec = ref._vec;
	return *this;
}

Span::~Span()
{
}

void	Span::addNumber(int nbr)
{
	if (_vec.capacity() == _vec.size())
		throw std::logic_error("cant add new val");
	_vec.push_back(nbr);
}

void	Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (_vec.capacity() < std::distance(start, end) + _vec.size())
		throw std::logic_error("cant add new val");
	_vec.insert(_vec.end(), start, end);
}

int		Span::longestSpan()
{
	if (_vec.size() <= 1)
		throw std::logic_error("not enough vals");
	int max = *std::max_element(_vec.begin(), _vec.end()) - *std::min_element(_vec.begin(), _vec.end());;
	return max;
}

int		Span::shortestSpan()
{
	if (_vec.size() <= 1)
		throw std::logic_error("not enough vals");
	int min = *std::max_element(_vec.begin(), _vec.end()) - *std::min_element(_vec.begin(), _vec.end());
	for (std::vector<int>::iterator it = _vec.begin(); (it + 1) != _vec.end(); it++)
	{
		int nbr = abs(*(it + 1) - *it);
		if (nbr < min)
			min = nbr;
	}
	return min;
}

std::vector<int> Span::get_vec() const
{
	return _vec;
}

std::ostream & operator<<(std::ostream & out, const Span & s)
{
	for (unsigned long i = 0; i < s.get_vec().size(); i++)
	{
		if (i != 0)
			out << ", ";
		out << s.get_vec()[i];
	}
	return out;
}

