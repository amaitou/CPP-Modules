
# Abstract Classes

In C++, an abstract class is a class that cannot be instantiated on its own, and it is typically used as a base class for other classes. Abstract classes are used to define a common interface and provide a blueprint for derived classes, but they cannot be used to create objects directly. Abstract classes are often used in conjunction with pure virtual functions to define a set of methods that derived classes must implement.

```c++
class AbstractClass
{
	public:
    	// Pure virtual function (abstract method)
    	virtual void doSomething() = 0;

    	// Regular member function
    	void regularFunction()
		{
        	// This function can have an implementation
        	// in the abstract class.
    	}
};
```

In the example above, AbstractClass is an abstract class with a pure virtual function doSomething(). Pure virtual functions are defined with "= 0" and have no implementation in the base class. Derived classes must provide an implementation for the pure virtual function, or they will also become abstract classes.

```c++
class ConcreteClass : public AbstractClass
{
	public:
    	// Implementing the pure virtual function
    	void doSomething()
		{
        	// Provide an implementation for the abstract method
        	// Here, we define what the function should do.
    	}
};

```

In this example, ConcreteClass is derived from AbstractClass and must provide an implementation for the pure virtual function doSomething(). Once the pure virtual function is implemented in a derived class, that class can be instantiated, and objects of that class can be created.

---

# Interfaces

In C++, an interface is not a language construct like it is in some other programming languages, such as Java or C#. However, you can create something similar to an interface in C++ using abstract base classes and pure virtual functions.

You can define an abstract base class with pure virtual functions. A pure virtual function is a function that is declared in the base class but has no implementation. Any class that derives from this base class must provide implementations for these pure virtual functions. This enforces that any derived class implements the required functionality, effectively defining an interface.

```c++
class Interface
{
	public:
		// Pure virtual function
    	virtual void doSomething() = 0;
		// Another pure virtual function
    	virtual void doSomethingElse() = 0;
};
```
---

# virtual Keyword

In C++, the virtual keyword is used to declare a member function of a class as "virtual." Virtual functions play a crucial role in enabling polymorphism, a fundamental concept in object-oriented programming. When a member function is declared as virtual in a base class, it allows derived classes to override that function, providing their own implementations. The actual function called at runtime depends on the object's dynamic (runtime) type.

To declare a virtual function, you use the virtual keyword before the function's return type in the base class

```c++
class Base
{
	public:
    	virtual void someFunction()
		{
        	// Base class implementation
    	}
};
```
In a derived class, you can override a virtual function by using the virtual keyword again, along with the override keyword (optional but recommended for clarity), and providing a new.

```c++
class Derived : public Base
{
	public:
    	void someFunction() override
		{
        	// Derived class implementation
    	}
};
```

The override keyword is used to indicate that you intend to override a virtual function from the base class. It helps catch typos and errors when the function's signature doesn't match the base class's virtual function.

---

Virtual functions enable polymorphism, which allows you to work with objects of different derived classes through a pointer or reference to the base class. This means you can call the appropriate.

```c++
Base* ptr;
Base b;
Derived d;

ptr = &b;
// Calls Base::someFunction
ptr->someFunction();

ptr = &d;
// Calls Derived::someFunction
ptr->someFunction();
```

In this example, the virtual function someFunction is called based on the actual type of the object being pointed to, allowing for dynamic dispatch.

> You can the virtual keyword also in multiple inheritance as we have seen before in module 03 to solve the Diamond Problem, as well as you can use it with destructors. 