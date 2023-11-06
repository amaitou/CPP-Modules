
---
# Table Of Content

- [Ad-hoc Polymorphism](https://github.com/amaitou/CPP-Modules/tree/master/Module-02#ad-hoc-polymorphism)
- [Operator Overloading](https://github.com/amaitou/CPP-Modules/tree/master/Module-02#operator-overloading)
- [Fixed-Point Representation](https://github.com/amaitou/CPP-Modules/tree/master/Module-02#fixed-point-representation)
---

# Ad-hoc Polymorphism

Ad-hoc polymorphism in C++ is a form of polymorphism where a single function or operator can behave differently based on the type or number of arguments it receives. It is also known as function overloading or operator overloading. Ad-hoc polymorphism allows you to define multiple functions or operators with the same name but different parameter lists, and the appropriate one is selected at compile-time based on the context in which the function is called.

```c++
#include <iostream>

// Function to add two integers
int add(int a, int b)
{
    return a + b;
}

// Function to concatenate two strings
std::string add(const std::string& str1, const std::string& str2)
{
    return str1 + str2;
}

int main()
{
	// Calls the integer version of the add function
    int result1 = add(5, 10);
	// Calls the string version of the add function
    std::string result2 = add("Hello, ", "world!");

    std::cout << result1 << std::endl;
    std::cout << result2 << std::endl;

    return 0;
}
```

In this example, we have two add functions with different parameter lists—one for integers and one for strings. Depending on the argument types provided when calling the add function, the appropriate version of the function is selected at compile-time.

---

# Operator Overloading

Operator overloading in C++ allows you to define custom behaviors for built-in operators when used with user-defined types (classes and structures). By overloading operators, you can make your code more expressive and intuitive, as it allows you to use operators in a way that makes sense for your custom data types. Operator overloading is achieved by defining specific member functions for the operators you want to overload. These functions have special names and syntax.

Here's an overview of some commonly overloaded operators and their syntax:

- **Arithmetic Operators (+, -, \*, /, %, etc.)**
	> To overload arithmetic operators, you typically define member functions within your class.
	```c++
	class Complex
	{
		public:
			double real;
			double imag;

			Complex(double r, double i) : real(r), imag(i) {}

			Complex operator+(const Complex& other) {
				return Complex(real + other.real, imag + other.imag);
		}
	};

	// Usage:
	Complex num1(3.0, 4.0);
	Complex num2(1.5, 2.5);
	Complex result = num1 + num2;
	```

	---

- **Comparison Operators (==, !=, <, <=, >, >=)**
	> These operators can be overloaded to compare objects of your class.

	```c++
	class Point
	{
		public:
			int x;
			int y;

			bool operator==(const Point& other)
			{
				return (x == other.x) && (y == other.y);
			}
	};

	// Usage:
	Point p1{1, 2};
	Point p2{1, 2};
	if (p1 == p2) 
	{
		;
	}
	```

	---

- **Unary Operators (e.g., ++, --, -, !)**
	> Overloading unary operators is straightforward, and they often have a single argument.

	```c++
	class Counter
	{
		public:
			int count;

			Counter(int c) : count(c) {}

			// Overload the prefix increment operator (++)
			Counter operator++()
			{
				return Counter(++count);
			}

			// Overload the negation operator (!)
			bool operator!()
			{
				return (count == 0);
			}
	};

	// Usage:
	Counter c(5);
	++c; // Calls the overloaded ++
	if (!c)
	{
		;
	}
	```

	---

- **Subscript Operator ([])**
	> The subscript operator is commonly overloaded for classes that represent collections or containers.

	```c++
	class MyArray
	{
		public:
			int arr[5];

			int& operator[](int index)
			{
				if (index >= 0 && index < 5)
				{
					return arr[index];
				} else 
				{
					throw std::out_of_range("Index out of bounds");
				}
			}
	};

	// Usage:
	MyArray arr;
	arr[2] = 42; // Calls the overloaded []
	int value = arr[2];
	```

	---

- **Stream Operators (<< and >>)**
	> Stream operators are often overloaded for input and output operations on custom classes.

	```c++
	class Book
	{
		public:
			std::string title;
			std::string author;

			friend std::ostream& operator<<(std::ostream& os, const Book& book)
			{
				os << "Title: " << book.title << ", Author: " << book.author;
				return os;
			}
	};

	// Usage:
	Book myBook{"Sample Book", "John Doe"};
	// Calls the overloaded << for output
	std::cout << myBook;
	```

Note: not all operators can be overloaded, and some operators have restrictions on their overloads.

---

# Fixed-Point Representation

A fixed-point representation in C++ is a way to represent fractional numbers using a fixed number of bits for the integer and fractional parts. This is useful in situations where you need to work with numbers that have a fixed number of decimal places, and you want to avoid the performance overhead of floating-point arithmetic or the precision limitations of integers.

To implement a fixed-point representation in C++, you typically define a custom class that encapsulates the fixed-point value and provides overloaded operators to perform arithmetic operations. Here's a basic.