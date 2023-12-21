/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:31:50 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:31:51 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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