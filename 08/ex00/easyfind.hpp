#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
void	easyfind(T container, int val)
{
	if ((std::find(container.begin(), container.end(), val)) != container.end())
		std::cout << "The val " << val << " existed" << std::endl;
	else
		throw std::logic_error("The val dont exist");
}

#endif