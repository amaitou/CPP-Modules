#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

template <class T>
int	easyfind(T &container, int needle)
{
	typename T::iterator t;

	t = std::find(container.begin(), container.end(), needle);
	if (t == container.end())
		return (0);
	return (1);
}

#endif