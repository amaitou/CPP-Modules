#include "Span.hpp"

int main(void)
{
	{
		try
		{
			Span span(10);
			unsigned int i(0);

			// fill the vector
			while (i < 5)
				span.addNumber(i++);
			// insert a vector
			std::vector<int> v2;
			v2.push_back(1150);
			v2.push_back(1400);
			v2.push_back(1400);
			v2.push_back(1400);
			v2.push_back(1400);
			span.addNumber(v2);

			// print the vector
			size_t j(0);
			while (j < span.getSize())
				std::cout << span[j++] << std::endl;

			// call the member functions to calculate the distances
			std::cout << "Shortest Span -> " << span.shortestSpan() << std::endl;
			std::cout << "Longest Span -> " << span.longestSpan() << std::endl;
			std::cout << "Span Size -> " << span.getSize() << std::endl;
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