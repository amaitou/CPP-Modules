# Class Allocation

In C++, when you create a class, memory is allocated for its objects. The memory allocation for a class can be broken down into several components:

- `Member Variables (Data Members)`:
    - Each object of a class contains data members that store the state of the object. Memory is allocated for these data members. The size of the memory allocated depends on the data types and the number of data members in the class.

- `Member Functions (Methods)`:
    - Member functions define the behavior of the class. However, these functions are not stored within the objects themselves. Instead, they are stored in a single copy in memory and are shared by all instances of the class.

- `Padding and Alignment`:
    - Memory allocation in C++ is subject to alignment requirements, which means that the compiler might add padding to ensure that data members are aligned properly in memory. This is done to improve memory access speed.

- `Virtual Function Tables (vtables)`:
    - If a class has virtual functions, it may also have a virtual function table (vtable). This table contains pointers to the virtual functions of the class and is used for dynamic dispatch. Each object of a class with virtual functions contains a pointer to the vtable, which is a form of hidden data member.

- `Inheritance`:
    - If a class is derived from another class, it contains all the data members of its base class and additional data members of its own. Memory is allocated for the complete object, which includes the data members of both the derived and base classes.

Here is an example using automatic allocation:

```c++
    class MyClass {
        int x; // Data member
        char c; // Data member

    public:
        void someFunction() {
            // Member function code
        }
    };

    int main() {
        MyClass obj; // Object of the class

        // Memory allocation for 'obj' includes space for 'x' and 'c'
        // Padding might be added to ensure proper alignment
        // Function code for 'someFunction' is not stored in the object
    }
```

---

# Dynamic & Automatic Allocations In C++

in C++, memory allocation for classes can be categorized into two main types: `dynamic memory allocation` and `automatic memory allocation`. These two approaches have distinct characteristics and use cases:

- ## Dynamic Memory Allocation (Heap Allocation):

    - Dynamic memory allocation is the process of creating objects on the heap, a region of memory separate from the stack. You use `new` or `std::make_shared` to allocate memory for objects.

    - Objects allocated dynamically have a dynamic lifetime and exist until explicitly deleted using delete (for objects created with `new`) or until the last shared pointer goes out of scope (for objects created with std::make_shared).

    - Dynamic memory allocation allows you to manage the lifetime of objects manually, and it's often used when you need objects to persist beyond the scope in which they were created or when you don't know the exact number of objects you need at compile time.

    - However, it's important to be cautious when using dynamic memory allocation to avoid memory leaks and deal with exception handling, as allocation can fail and throw `std::bad_alloc exceptions`.

    ```c++
        MyClass* obj = new MyClass;
        // ...
        delete obj; // Explicitly release memory when done
    ```
- ## Automatic Memory Allocation (Stack Allocation):

    - Automatic memory allocation, also known as stack allocation, is the process of creating objects on the program's stack. You simply declare the object in your code, and the memory is automatically allocated and deallocated as the object's scope changes.

        Objects allocated on the stack have a limited lifetime, tied to the scope in which they are declared. When the object goes out of scope, its destructor is automatically called, and the memory is reclaimed.
    
    - Stack allocation is generally more efficient than dynamic allocation, as it doesn't involve the overhead of heap management.

    - Use stack allocation when you have a clear scope and know that the object's lifetime is limited to that scope. It's suitable for most local variables and objects that are short-lived.

    ```c++
        MyClass obj;
        // ...
        // Memory is automatically reclaimed when 'obj' goes out of scope
    ```

# New Keyword

in C++, the `new` keyword is used for dynamic memory allocation. It allows you to allocate memory on the heap for objects, arrays, or primitive data types at runtime. When you use `new`, you explicitly request memory from the system, and you are responsible for releasing that memory when it is no longer needed. Here's how `new` works:

- `Allocation of Memory`: When you use new, it allocates memory on the heap and returns a pointer to the allocated memory. The pointer has the type of the object or data type you're allocating memory for.

    ```c++
    int* ptr = new int; // Allocates memory for an integer on the heap
    ```

- `Initialization`: Optionally, you can initialize the memory by using the constructor for objects. For built-in data types, you can assign initial values.

    ```c++
    MyClass* obj = new MyClass(); // Allocates and initializes an object of class MyClass
    ```

- `Deletion`: After you've finished using the dynamically allocated memory, it's important to release the memory to prevent memory leaks. You use the delete operator to do this.

    ```c++
    delete ptr; // Release the memory for the integer
    ```
    ```c++
    delete obj; // Release the memory for the object
    ```

- `Exception Handling`: Dynamic memory allocation using new can potentially fail if there's not enough memory available. In this case, new throws a std::bad_alloc exception. To handle allocation failure gracefully, you can use the new (std::nothrow) form, which returns a nullptr on failure instead of throwing an exception.

    ```c++
    int* ptr = nullptr;
    try {
        ptr = new int; // May throw std::bad_alloc on failure
    }
    catch (const std::bad_alloc& e) {
        // Handle allocation failure
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
    }
    ```

- `Array Allocation`: You can also use new to dynamically allocate arrays of objects or data types.

    ```c++
    int* intArray = new int[10]; // Allocates an array of 10 integers on the heap
    ```

- `Array Deletion`: When deleting dynamically allocated arrays, you should use delete[] to properly deallocate the memory.

    ```c++
    delete[] intArray; // Release the memory for the array
    ```

# Pointer To Member Function

Pointers to member functions in C++ are used to store and manipulate pointers to member functions of a class. They allow you to call class member functions indirectly, making them useful for scenarios such as callbacks, event handling, and building function tables. Pointers to member functions are a bit different from regular function pointers because they must include information about the class type the member function belongs to.

You declare a pointer to a member function using the following syntax:

```c++
return_type (Class::*pointer_name)(parameter_types);
```

- `return_type`: The return type of the member function.
- `Class`: The class type that contains the member function.
- `pointer_name`: The name you choose for the pointer to member function.
- `parameter_types`: The types of parameters the member function takes.

You can assign a pointer to a specific member function of a class instance using the address-of operator (&) and the class instance:

```c++
MyClass obj;
functionPtr = &MyClass::someMemberFunction;
```

To call a member function using the pointer, you need an instance of the class. You use the pointer and the .* or ->* operator:

- `.*` is used when you have an instance of the class.
- `->*` is used when you have a pointer to an instance of the class.

```c++
MyClass obj;
int result = (obj.*functionPtr)(42);
```
```c++
MyClass* pObj = new MyClass;
int result = (pObj->*functionPtr)(42);
```

## - Function Pointers vs. Pointers to Member Functions:

- `Function pointers` ```(void(*)(...))``` can point to standalone functions or static member functions and do not require an instance of a class.
- `Pointers to member functions` can only point to non-static member functions and require an instance of the class for invocation.

# Reference & In C++

In C++, a `reference` is a feature that allows you to create an alias or an alternative name for an existing object. Unlike a pointer, a `reference` cannot be null and doesn't require dereferencing. It's often used for various purposes, including passing arguments to functions, returning values from functions, and creating more readable code.

This is how you can declare, use and deal with it:

```c++
int original = 42;
int& ref = original; // 'ref' is now an alias for 'original'
ref = 10; // Changes 'original' to 10
```

## Reference & Pointers

- `References` provide a more concise and often safer way to work with objects compared to pointers, as they cannot be null and do not require explicit dereferencing.

- `References` are usually used for a single object, while pointers can point to multiple objects or even to no object (i.e., they can be null).
`References` are commonly used in function parameters when you want to modify the original object, whereas pointers are used when you want to accept optional arguments.

- `References` are a fundamental concept in C++ that help make code more efficient, readable, and maintainable. They are widely used in C++ code to work with objects and data structures in a convenient and safe manner.