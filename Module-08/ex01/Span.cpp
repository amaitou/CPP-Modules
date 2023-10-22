
#include "Span.hpp"

Span::Span()
{
	this->n = 500;
}
Span::Span(unsigned int n)
{
	this->n = n;
}

Span::~Span() {}

Span::Span(const Span &copy)
{
	this->n = copy.n;
	this->v = copy.v;
}

Span &Span::operator = (const Span &object)
{
	this->n = object.n;
	this->v = object.v;
	return (*this);
}

unsigned int Span::getSize(void) const
{
	return (this->v.size());
}

void	Span::addNumber(int n)
{
	
	if (this->n < this->v.size())
		throw Span::SizeOutOfBounds();
	this->v.push_back(n);
}

void	Span::addNumber(std::vector<int> &targetVector)
{
	if (this->v.size() + targetVector.size() > this->n)
		throw Span::SizeOutOfBounds();
	this->v.insert(v.end(), targetVector.begin(), targetVector.end());
}

int Span::shortestSpan(void)
{
	if (this->v.size() <= 1)
		throw Span::SizeOutOfBounds();
	std::vector<int> temp_vector = this->v;
	std::sort(temp_vector.begin(), temp_vector.end());
	int shortest = temp_vector[1] - temp_vector[0];
	int	temp = 0;
	for (size_t i(2); i < temp_vector.size(); ++i)
	{
		temp = temp_vector[i] - temp_vector[i - 1];
		if (temp < shortest)
			shortest = temp;
	}
	return (shortest);
}

int Span::longestSpan(void)
{
	if (this->v.size() <= 1)
		throw Span::SizeOutOfBounds();
	std::vector<int> temp_vector = this->v;
	std::sort(temp_vector.begin(), temp_vector.end());
	return (temp_vector.back() - temp_vector.front());
}

int &Span::operator[] (size_t index)
{
	if (index >= this->v.size())
		throw Span::SizeOutOfBounds();
	return (this->v[index]);
}