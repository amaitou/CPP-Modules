
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <class T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack() {}
		~MutantStack() {}
		MutantStack(const MutantStack &copy): std::stack<T>(copy) {}
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
