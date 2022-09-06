#include "whatever.hpp"

class Awesome
{
	public :

		Awesome() : _n(0){}
		Awesome(int n) : _n(n){}
		Awesome & operator= (Awesome const & ref_A) {
			_n = ref_A._n;
			return *this; }
		bool operator== (Awesome const & ref_A) const
		{
			return _n == ref_A._n;
		}
		bool operator!=(Awesome const & ref_A) const
		{
			return _n != ref_A._n;
		}
		bool operator>(Awesome const & ref_A) const
		{
			return _n > ref_A._n;
		}
		bool operator<(Awesome const & ref_A) const
		{
			return _n < ref_A._n;
		}
		bool operator>=(Awesome const & ref_A) const
		{
			return _n >= ref_A._n;
		}
		bool operator<=(Awesome const & ref_A) const
		{
			return _n <= ref_A._n;
		}
		int get_n() const 
		{
			return _n;
		}
	private :
		int _n;
};

std::ostream & operator<< (std::ostream & out, const Awesome & a)
{
	out << a.get_n();
	return out;
}

int main( void )
{
	std::cout << "_______test int________\n";
	int aa = 2;
	int bb = 3;
	::swap( aa, bb );
	std::cout << "a = " << aa << ", b = " << bb << std::endl;
	std::cout << "min( a, b ) = " << ::min( aa, bb ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( aa, bb ) << std::endl;

	std::cout << "_______test string________\n";
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "min( d, c ) = " << ::min( d, c ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "_______test Awesome________\n";

	Awesome a(2), b(4);
	std::cout << "a = " << a << " b = " << b << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << " b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	return 0;
}
