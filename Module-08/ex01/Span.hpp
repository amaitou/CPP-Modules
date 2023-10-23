#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>

class Span
{
	private:
		unsigned int	n;
		std::vector<int>		v;
	public:
		Span();
		Span(unsigned int n);
		~Span();
		Span(const Span &copy);
		Span & operator = (const Span &copy);
		unsigned int	getSize(void) const;
		void	addNumber(int n);
		void	addNumber(std::vector<int> &targetVector);
		int & operator [] (size_t index);
		class SizeOutOfBounds: public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Failed to add the number");
				}
		};
		int shortestSpan(void);
		int longestSpan(void);
};

#endif
