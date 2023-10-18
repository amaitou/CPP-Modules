#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <cstdlib>

template <typename T>
void	iter(T *arr, size_t len, void(*func)(T, size_t, size_t))
{
	size_t i(0);
	while (i < len)
	{
		func(arr[i], i, len);
		++i;
	}
}

template <typename T>
void	print_elements(T element, size_t index, size_t len)
{
	std::cout << element;
	if (!(index + 1 == len))
		std::cout << ", ";
}

#endif