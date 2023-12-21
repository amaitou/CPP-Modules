/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:31:15 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:31:16 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <cstdlib>

template <typename T>
void	swap(T &a, T &b)
{
	T t;

	t = a;
	a = b;
	b = t;
}
template <typename T>
T	max(T &a, T &b)
{
	return (a > b)? a : b;
}

template <typename T>
T	min(T &a, T &b)
{
	return (a < b)? a : b;
}
#endif