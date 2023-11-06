
# Exception Handling

Exception handling in C++ is a mechanism that allows you to deal with unexpected situations or errors that can occur during program execution. It provides a way to gracefully handle errors and recover from them, rather than letting the program crash.

- ### Throwing An Exception
	To throw an exception in C++, you use the throw keyword, followed by an object. This object can be of any type, but it's typically an instance of a class derived from the `std::exception` class or one of its derived classes.

	```c++
	throw std::runtime_error("An error occurred.");
	```

	---

- ### Catching Exception

	To catch an exception, you use a `try-catch` block. Within the try block, you place the code that may throw an exception. In the `catch` block, you specify the type of exception you want to catch and define how to handle it. If an exception of the specified type is thrown, the corresponding catch block will be executed. You can have multiple catch blocks for different exception types.

	```c++
	try
	{
    // Code that may throw an exception
	}
	catch (const std::exception& e)
	{
		// Handle the exception
	}
	```

	> Note -> If an exception is thrown in a function and not caught within that function, it will propagate up the call stack until it is caught by a suitable catch block or until it reaches the top-level of the program. If it's not caught, the program will terminate.

	---

# Standard Exception Classes

C++ provides a set of standard exception classes, such as `std::exception`, `std::runtime_error`, and `std::logic_error`. You can use these or derive your own custom exception classes from them.

- ### std::exception
	- This is the base class for all C++ standard exceptions.
	- It provides a virtual function what() that returns a C-style string (a pointer to a character array) describing the exception.
	- It is not meant to be directly instantiated but serves as a base class for other exception types.

	---

- ### std::runtime_error

	- Derived from `std::exception`.
	- Typically used to represent runtime errors that can occur during program execution, such as division by zero, opening a file that doesn't exist, or memory allocation failure.
	- You can create instances of `std::runtime_error` by providing an error message in its constructor.

	---

- ### std::logic_error

	- Derived from `std::exception`.
	- Used to represent logic errors in your program, which are typically due to programming mistakes, not runtime conditions.
	- Examples include attempting to access an element out of range in a container (e.g., std::vector::at()), or using an invalid argument with a function.

	---

The main difference between `std::runtime_error` and `std::logic_error` is the type of error they are designed to handle. `std::runtime_error` is for exceptions that occur at runtime and are often beyond the programmer's control, while `std::logic_error` is for logical errors in the program's design or use, which are typically the programmer's responsibility to correct.

---

# Creating Your Own Exception

In C++ you are allowed and able to create your own exception. <br />
To create your own exception class, you typically derive it from one of the standard exception classes or directly from `std::exception`.

```c++
#include <exception>

class MyCustomException : public std::exception
{
	public:
    	MyCustomException(const char* message) : message(message) {}

    	const char* what() const throw()
		{
        	return message.c_str();
    	}

		private:
    		std::string message;
};
```
Catching Your Exception
```c++
try
{
    throw MyCustomException("Custom exception message");
}
catch (const MyCustomException& e)
{
    // Handle the custom exception
    std::cerr << "Caught custom exception: " << e.what() << std::endl;
}

```