
# STL (Standard Template Library)

The Standard Template Library (STL) in C++ is a powerful collection of classes and functions that provide reusable, generic algorithms and containers. It is a part of the C++ Standard Library and is designed to facilitate software development by offering robust, efficient, and flexible data structures and algorithms. The STL is based on the concept of templates, allowing for parameterized types and functions, enabling developers to write generic code that can work with any data type. The library consists of several components, including containers (such as vectors, lists, maps, and sets), algorithms (for sorting, searching, and manipulating data), and iterators (which provide a uniform interface for traversing elements in containers). By leveraging the STL, C++ programmers can write code that is concise, efficient, and easy to maintain, accelerating the development process and promoting code reuse and portability across different projects.

# STL Types

- ### Sequence Containers

    - **std::vector**: A dynamic array that provides constant-time access to elements and efficient insertion and deletion at the end of the container. It automatically resizes itself when needed.

    ---

    - **std::deque**: A double-ended queue similar to `std::vector` but allows efficient insertion and deletion at both ends.

    ---

    - **std::list**: A doubly linked list that allows constant-time insertion and deletion of elements anywhere within the sequence.

    ---

    - **std::forward_list**: A singly linked list similar to `std::list` but consumes less memory due to its singly linked nature.

    ---

    - **std::array**: A fixed-size array whose size is determined at compile time. It provides direct access to elements like C-style arrays but with additional functionality and safety.

---

- ### Associative Containers

    - **std::set**: Stores unique elements in sorted order using a balanced binary search tree.

    ---

    - **std::multiset**: Allows duplicate elements in sorted order.

    ---

    - **std::map**: Stores key-value pairs where keys are unique and sorted. It provides efficient search, insertion, and deletion operations based on the keys.

    ---

    - **std::multimap**: Allows duplicate keys in sorted order.

    ---

    - **std::unordered_set**: Stores unique elements using a hash-based container, providing constant-time average complexity for insertion, deletion, and search operations.

    ---

    - **std::unordered_multiset**: Allows duplicate elements using a hash-based container.

    ---

    - **std::unordered_map**: Stores key-value pairs using a hash-based container, providing constant-time average complexity for insertion, deletion, and search operations.

    ---

    - **std::unordered_multimap**: Allows duplicate keys using a hash-based container.

---

- ### Container Adaptors

    - **std::stack**: Provides a LIFO (Last-In, First-Out) stack interface, typically implemented using other sequence containers.

    ---

    - **std::queue**: Provides a FIFO (First-In, First-Out) queue interface, typically implemented using other sequence containers.

    ---

    - **std::priority_queue**: Provides a priority queue interface where elements are dequeued based on their priority, typically implemented using a binary heap.

    ### Other Utilities

    - **std::pair**: A utility class template that holds two objects as a single entity.

    ---

    - **std::tuple**: A utility class template that holds a fixed-size collection of heterogeneous objects.

    ---

    - **std::function**: A polymorphic function wrapper that can store, copy, and invoke any Callable target, such as functions, function objects, or lambda expressions.

    ---

    - **std::algorithm**: Provides a collection of functions for a variety of common tasks such as searching, sorting, and modifying sequences.

    ---

    - **Iterators**: Iterator types for traversing elements in containers, including input iterators, output iterators, forward iterators, bidirectional iterators, and random access iterators.

---

# Underlying Storage Container (USC)

Container adapter is a class template in the Standard Template Library (STL) that provides a different interface to existing sequence containers. Container adapters adapt the interface of the underlying container to provide a specific behavior or functionality, making it easier to use the container in a particular context.

- **std::stack**

std::stack provides a Last-In, First-Out (LIFO) data structure, also known as a stack. It is implemented as an adapter over another sequence container (such as std::deque, std::list, or std::vector).

- **std::queue**

std::queue provides a First-In, First-Out (FIFO) data structure, also known as a queue. It is implemented as an adapter over another sequence container (such as std::deque or std::list).

