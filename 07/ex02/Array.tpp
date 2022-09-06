#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	_size = 0;
	_arr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_size = n;
	_arr = new T[n];
}

template <typename T>
Array<T>::Array(const Array & ref)
{
	_size = ref._size;
	_arr = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
	{
		_arr[i] = ref._arr[i];
	}
}

template <typename T>
Array<T>::~Array()
{
	delete [] _arr;
}

template <typename T>
T & Array<T>::operator[]( unsigned int n )
{
	if (n > _size)
		throw std::logic_error("Index is out of bounds");
	return _arr[n];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}
