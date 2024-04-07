
# Table of content

- [Templates](https://github.com/amaitou/CPP-Modules/tree/master/Module-07#templates)
    - [Function template](https://github.com/amaitou/CPP-Modules/tree/master/Module-07#function-templates)
    - [Class template](https://github.com/amaitou/CPP-Modules/tree/master/Module-07#class-templates)

# Templates

In C++, templates provide a powerful mechanism for writing generic code that can work with different data types while maintaining type safety. With templates, you can define classes, functions, and data structures that are parameterized by one or more types or values. This allows you to write code that is reusable and flexible, as it can adapt to various data types without the need for duplication. Templates are extensively used in standard library containers like vectors and maps, as well as algorithms like sorting and searching, enabling developers to write efficient and concise code that can handle a wide range of data types seamlessly.

---

- Types of templates

    In C++, there are mainly two types of templates

    - ## **Function Templates**
        
    Function templates allow you to define a generic function that can operate with any data type. The function's logic is written in a way that it can work with different types of parameters.

    ```c++
    template <typename T>
    T add(T a, T b) {
        return a + b;
    }
    ```

    This add function can work with integers, floating-point numbers, or any other data type that supports addition.

    ---

    - ## **Class templates**

    Class templates enable you to define a generic class that can work with any data type. The class can be instantiated with different types, providing flexibility and reusability. 

    ```c++
    template <typename T>
    class Stack {
    private:
        vector<T> elements;
    public:
        void push(const T& element) {
            elements.push_back(element);
        }
        
        T pop() {
            T element = elements.back();
            elements.pop_back();
            return element;
        }
    };
    ```
    This Stack class template can be used to create stacks of integers, floating-point numbers, or any other type of data.

    These two types of templates, function templates, and class templates, are fundamental to generic programming in C++.

    ---