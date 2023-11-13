

---
# Table Of Content

- [Casting in C++](https://github.com/amaitou/CPP-Modules/tree/master/Module-06#casting-in-c)
	- [Static Cast](https://github.com/amaitou/CPP-Modules/tree/master/Module-06#static-cast)
	- [Dynamic Cast](https://github.com/amaitou/CPP-Modules/tree/master/Module-06#dynamic-cast)
	- [Const Cast](https://github.com/amaitou/CPP-Modules/tree/master/Module-06#const6cast)
	- [Reinterpret Cast](https://github.com/amaitou/CPP-Modules/tree/master/Module-6#reinterpret-cast)
	- [C-Style Cast](https://github.com/amaitou/CPP-Modules/tree/master/Module-06#c-stylecast)

# Casting in C++

casting is a way to convert data from one data type to another. There are several types of casting available, each serving a specific purpose.

- ### Static Cast
	`static_cast` is used for implicit conversions between related data types. It's the most common type of casting in C++ and is checked at compile time.

	```c++
	double x = 3.14;
	// Converts a double to an int
	int y = static_cast<int>(x);
	```

	---

- ### Dynamic Cast
	`dynamic_cast` is used for casting in the context of inheritance hierarchies (polymorphism). It checks if the casting is valid at runtime and is primarily used for casting pointers or references to base classes to derived classes.

	```c++
	class Base { virtual void foo() {} };
	class Derived : public Base { };

	Base* basePtr = new Derived;
	Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
	if (derivedPtr)
	{
		// Casting is successful
	}
	```

	---

- ### Const Cast

	`const_cast` is used to add or remove the const qualifier from a variable. It is mainly used to cast away the constness of a variable.

	```c++
	const int x = 5;
	// Removes the const qualifier
	int y = const_cast<int>(x);
	```

	---

- ### Reinterpret Cast

	`reinterpret_cast` is used for low-level casting that converts one pointer type to another or one integral type to a pointer, without any type checking by the compiler. It should be used with caution, as it can lead to undefined behavior if misused.

	> You can this type of casting to serialize ot deserialize an object (for example)

	```c++
	// Convert an address to an integer pointer
	int* x = reinterpret_cast<int*>(0x7FFF);
	```

	---

- ### C-Style Cast

	`C-style` cast is a traditional way of performing type casting, but it's generally discouraged in C++ because it can lead to unintended conversions. It can perform any of the above cast operations but lacks the explicit naming and type checking of the C++ casting operators.

	```c++
	double x = 3.14;
	int y = (int)x; // C-style cast to convert a double to an int
	```
