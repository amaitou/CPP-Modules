

---
# Table Of Content

- [Inheritance](https://github.com/amaitou/CPP-Modules/tree/master/Module-03#inheritance)
	- [Abstract](https://github.com/amaitou/CPP-Modules/tree/master/Module-03#abstract)
	- [What is Inheritance ?](https://github.com/amaitou/CPP-Modules/tree/master/Module-03#what-is-inheritance-)
	- [How to use it ?](https://github.com/amaitou/CPP-Modules/tree/master/Module-03#how-to-use-it-)
- [Types Of Inheritance](https://github.com/amaitou/CPP-Modules/tree/master/Module-03#type-of-inheritance-)
- [Common Problems in Inheritance](https://github.com/amaitou/CPP-Modules/tree/master/Module-03#common-problems-in-inheritance)
- [In Terms Of C++](https://github.com/amaitou/CPP-Modules/tree/master/Module-03#in-terms-of-c)
	- [Public Inheritance](https://github.com/amaitou/CPP-Modules/tree/master/Module-03#public-inheritance)
	- [Private Inheritance](https://github.com/amaitou/CPP-Modules/tree/master/Module-03#private-inheritance)
	- [Protected Inheritance](https://github.com/amaitou/CPP-Modules/tree/master/Module-03#protected-inheritance)
- [Diamond Problem](https://github.com/amaitou/CPP-Modules/tree/master/Module-03#diamond-problem)
---
# Inheritance

- ### Abstract
	Inheritance is a fundamental concept in object-oriented programming (OOP) that allows for the creation of hierarchical relationships among classes. This README explores what inheritance is, how to use it, its different types, and common problems associated with its implementation. The aim is to provide a comprehensive understanding of inheritance in OOP and offer insights into best practices and solutions for its challenges.

- ### What is Inheritance ?
	Inheritance is a mechanism in OOP that enables the creation of new classes (subclasses or derived classes) based on existing classes (superclasses or base classes). Subclasses inherit the attributes and methods of their parent classes, facilitating code reuse and the establishment of hierarchical relationships.

- ### How to use it ?
	To utilize inheritance effectively, developers should follow these steps:
	- a. Create a base class (superclass) with common attributes and methods.
	- b. Define a derived class (subclass) that inherits from the base class.
	- c. Customize the subclass by adding new attributes or methods and modifying existing ones.
	- d. Utilize the subclass in the application to benefit from code reuse.

# Type Of Inheritance ?

There are several types of inheritance, including:
- a. Single Inheritance: A subclass inherits from only one superclass.
- b. Multiple Inheritance: A subclass inherits from more than one superclass, which can lead to complications like the "diamond problem."
- c. Multilevel Inheritance: Subclasses are created in a hierarchy, forming a chain of inheritance.
- d. Hierarchical Inheritance: Multiple subclasses inherit from a single superclass.
- e. Hybrid Inheritance: A combination of multiple inheritance types.

# Common Problems in Inheritance

Implementing inheritance can lead to various challenges, including:
a. Inheritance Hierarchy Issues: Deep and complex hierarchies can make code maintenance and understanding difficult.
- b. The Diamond Problem: Multiple inheritance can lead to ambiguity in method resolution.
- c. Tight Coupling: Overuse of inheritance can result in tightly coupled classes, making code modifications cumbersome.
- d. Fragile Base Class Problem: Modifying the base class can unintentionally affect derived classes.
- e. Violation of Liskov Substitution Principle: Subclasses may not adhere to the principle of substitutability, causing unexpected behavior.

> Check the [Liskov Substitution Principle](https://www.linkedin.com/advice/1/how-do-you-explain-liskov-substitution-principle#:~:text=Identifying%20violations%20of%20the%20Liskov,or%20returning%20different%20types%20or)

# In Terms Of C++

In terms of C++ the concept of inheritance goes here as well, in our language but if you want to inherit from a base class, there would be a types of to the used keywords to inherit from the parent class, these keywords might be public, private or protected, so without any further ado let's check them all with examples:

- ### Public Inheritance:
	```c++
	class Base
	{
	public:
		int publicVar;
		void publicFunction()
		{
			// Some code here
		}
	};

	class Derived : public Base
	{
		// publicVar and publicFunction are accessible as public members in Derived.
	};
	```
	In public inheritance, all the public members of the base class become public members in the derived class. This means that you can access publicVar and publicFunction directly from the Derived class.

	---

- ### Private Inheritance:
	```c++
	class Base
	{
	public:
		int publicVar;
		void publicFunction()
		{
			// Some code here
		}
	};
		class Derived : private Base
	{
		// publicVar and publicFunction are accessible as public members in Derived.
	};
	```
	In private inheritance, all the public members of the base class become private members in the derived class. This means that you can still access publicVar and publicFunction from the Derived class, but only within the Derived class. They are not accessible from objects of the Derived class or other classes.

	---

- ### Protected Inheritance:
	```c++
	class Base
	{
	public:
		int publicVar;
		void publicFunction()
		{
			// Some code here
		}
	};
		class Derived : protected Base
	{
		// publicVar and publicFunction are accessible as public members in Derived.
	};
	```
	In protected inheritance, all the public members of the base class become protected members in the derived class. This means that you can access publicVar and publicFunction from the Derived class and its subclasses, but they are not accessible from objects of the Derived class or unrelated classes.

the choice of access specifier affects the visibility of the base class members in the derived class, which can impact the design and behavior of your code. It's essential to choose the right access specifier based on your design requirements to ensure proper encapsulation and access control.

---

# Diamond Problem

The "diamond problem" is a term used in object-oriented programming to describe a particular issue that can arise in class hierarchies involving multiple inheritance. It is most commonly associated with programming languages that support multiple inheritance, such as C++.

The diamond problem occurs when a class inherits from two or more classes that have a common base class. This creates an ambiguity in the class hierarchy, particularly when methods or attributes from the common base class are overridden or when the compiler or interpreter cannot determine which method or attribute to use. The problem gets its name because the class hierarchy diagram often resembles a diamond shape.

```
    A
   / \
   B  C
   \ /
    D
```

In this example, class D inherits from both classes B and C, which, in turn, inherit from class A. If both classes B and C have overridden methods from class A, it's unclear which version of the method class D should inherit.

```c++
class A 
{
	public:
		void foo() { cout << "A::foo()" << endl; }
};

class B : public A
{
	public:
    	void foo() { cout << "B::foo()" << endl; }
};

class C : public A
{
	public:
    	void foo() { cout << "C::foo()" << endl; }
};

class D : public B, public C {};

int main()
{
    D d;
}
```

In this example, class D inherits from both classes B and C, which, in turn, inherit from class A. The foo() function is overridden in both B and C. When you create an instance of D and call d.foo(), it's unclear which version of the foo() method to call.

To solve the diamond problem in C++, you can use the virtual keyword and the scope resolution operator :: to specify which version of a method you want to call. Here's how you can modify the code to resolve the ambiguity:

```c++
#include <iostream>
using namespace std;

class A 
{
	public:
		void foo() { cout << "A::foo()" << endl; }
};

class B : virtual public A // Use virtual inheritance
{
	public:
		void foo() { cout << "B::foo()" << endl; }
};

class C : virtual public A // Use virtual inheritance
{
	public:
		void foo() { cout << "C::foo()" << endl; }
};

class D : public B, public C {};

int main()
{
    D d;
    d.foo(); // Calls A::foo()
}

```
By making the inheritance from class A virtual in classes B and C, you ensure that there's only one shared instance of class A in class D. This resolves the ambiguity in the function call, and calling d.foo() will now call A::foo() as expected.