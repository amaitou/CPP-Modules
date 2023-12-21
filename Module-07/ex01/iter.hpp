/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:31:22 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:31:23 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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