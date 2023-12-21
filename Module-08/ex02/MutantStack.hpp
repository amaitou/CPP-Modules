/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 01:32:28 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 01:32:29 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <class T>
class MutantStack: public std::stack<T, std::deque<T> >
{
	public:
		MutantStack() {}
		~MutantStack() {}
		MutantStack(const MutantStack &copy): std::stack<T, std::deque<T> >(copy) {}
		MutantStack & operator = (const MutantStack &object)
		{
			if (this != &object)
            	std::stack<T>::operator=(object);
        	return *this;
		}
		typedef typename std::deque<T>::iterator iterator;
		iterator begin()
		{
			return (this->c.begin());
		}
		iterator end()
		{
			return (this->c.end());
		}
};

#endif
