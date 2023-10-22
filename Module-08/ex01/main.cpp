#include "Span.hpp"

int main(void)
{
	{
		try
		{
			Span span(10000);
			unsigned int i(0);
			while (i < span.getSize())
				span.addNumber(i++);
			std::cout << "Shortest Span -> " << span.shortestSpan() << std::endl;
			std::cout << "Longest Span -> " << span.longestSpan() << std::endl;
			std::cout << "Span Size -> " << span.getSize() << std::endl;
			span.addNumber(1000);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	{
		try
		{
			Span sp1 = Span(5);
			Span sp2;
			sp1.addNumber(6);
			sp1.addNumber(3);
			sp1.addNumber(17);
			sp1.addNumber(9);
			sp1.addNumber(11);
			sp2 = sp1;
			std::cout << sp2.shortestSpan() << std::endl;
			std::cout << sp2.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	return (0);
}