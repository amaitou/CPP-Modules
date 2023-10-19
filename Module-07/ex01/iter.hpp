#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <cstdlib>

template <typename T, typename U>
void	iter(T *arr, size_t len, void(*func)(U))
{
	size_t i(0);
	while (i < len)
	{
		func(arr[i]);
		++i;
	}
}

template <typename U>
void	print_elements(U element)
{
	std::cout << element << ", ";
}

#endif