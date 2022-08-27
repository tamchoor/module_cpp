#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
// #include <string>

template <typename T>
class Array
{
	public:
	Array();
	Array(unsigned int n);
	Array(const Array & ref);

	Array<T> & operator=(const Array<T> & ref)
	{
		if (this == &ref)
			return *this;
		_size = ref._size;
		delete [] _arr;
		_arr = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
		{
			_arr[i] = ref._arr[i];
		}
		return *this;
	};

	~Array();

	T & operator[]( unsigned int n );
	unsigned int size() const;

	private:
		unsigned int _size;
		T *_arr;

};

#include "Array.tpp"

#endif