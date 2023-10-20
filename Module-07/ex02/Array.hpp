#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>

typedef unsigned int t_ui;
template <typename T>
class Array
{
	private:
		T *array;
		t_ui n;
	public:
		Array(void)
		{
			this->array = new T();
		}
		Array(t_ui n)
		{
			this->array = new T[n];
			this->n = n;
		}
		~Array()
		{
			delete[] this->array;
		}
		Array(const Array &copy)
		{
			this->n = copy.n;
			this->array = new T[copy.n];
			size_t i(0);
			while (i < this->n)
			{
				this->array[i] = copy.array[i];
				++i;
			}
		}
		class IndexOutOfRange: public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Index Out Of Range";
				}
		};
		Array & operator = (const Array &object)
		{
			this->n = object.n;
			this->array = new T[object.n];
			size_t i(0);
			while (i < object.n)
			{
				this->array[i] = object.array[i];
				++i;
			}
			return (*this);
		}
		T & operator[](t_ui index) const
		{
			if (index >= this->n)
				throw Array::IndexOutOfRange();
			return (this->array[index]);
		}
		t_ui	size(void) const
		{
			return (this->n);
		}
		
};

template <typename T>
std::ostream & operator << (std::ostream &os, const Array<T> &arr)
{
	os << "[ ";
	size_t i(0);
	while (i < arr.size())
	{
		os << arr[i];
		if (!(i + 1 == arr.size()))
			os << ", ";
		++i;
	}
	os << "]";
	return (os);
}

#endif