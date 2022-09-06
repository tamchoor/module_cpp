#include "iter.hpp"

class Awesome
{
	public :

		Awesome() : _n(42){}
		// Awesome(int n) : _n(n){}
		// Awesome & operator= (Awesome const & ref_A) {
		// 	_n = ref_A._n;
		// 	return *this; }
		// bool operator== (Awesome const & ref_A) const
		// {
		// 	return _n == ref_A._n;
		// }
		// bool operator!=(Awesome const & ref_A) const
		// {
		// 	return _n != ref_A._n;
		// }
		// bool operator>(Awesome const & ref_A) const
		// {
		// 	return _n > ref_A._n;
		// }
		// bool operator<(Awesome const & ref_A) const
		// {
		// 	return _n < ref_A._n;
		// }
		// bool operator>=(Awesome const & ref_A) const
		// {
		// 	return _n >= ref_A._n;
		// }
		// bool operator<=(Awesome const & ref_A) const
		// {
		// 	return _n <= ref_A._n;
		// }
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



template <typename T>
void fillVal(T & val)
{
	val = 97;
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


	iter(intArr, size, &fillVal);
	iter(intArr, size, &printVal);

	iter(charArr, size, &fillVal);
	iter(charArr, size, &printVal);


	std::cout << "______Test 2________\n";
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];
	size = 5;
	iter(tab, size, &printVal);
	iter(tab2, size, &printVal);


	return 0;
}
