#include "Span.hpp"

int main()
{

	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Span sp = Span(2);
		sp.addNumber(6);
		sp.addNumber(3);
		std::cout << sp << std::endl;
		sp.addNumber(17);
		std::cout << sp << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Span sp = Span(2);
		sp.addNumber(6);
		std::cout << sp << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Span sp = Span(2);
		sp.addNumber(6);
		std::cout << sp << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	try
	{
		Span sp = Span(30000);
		{
			std::vector<int> myvec(10000, 10);
			sp.addNumber(myvec.begin(), myvec.end());
		}
		{
			std::vector<int> myvec(10000, 2);
			sp.addNumber(myvec.begin(), myvec.end());
		}
		{
			std::vector<int> myvec(10000, 3);
			sp.addNumber(myvec.begin(), myvec.end());
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Span sp = Span(20);
		{
			std::vector<int> myvec(10, 10);
			sp.addNumber(myvec.begin(), myvec.end());
		}
		std::cout << sp << std::endl;
		{
			std::vector<int> myvec(10, 2);
			sp.addNumber(myvec.begin(), myvec.end());
		}
		std::cout << sp << std::endl;
		{
			std::vector<int> myvec(10, 3);
			sp.addNumber(myvec.begin(), myvec.end());
		}
		std::cout << sp << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
