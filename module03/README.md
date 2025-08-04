Why And When To Use "Inheritance"?
- It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.

Mode

Description

Public Inheritance Mode

Public member of the base class will become public in the derived class and protected members of the base class will become protected in the derived class.

Protected Inheritance Mode

Both public and protected members of the base class will become protected in the derived class.

Private Inheritance Mode

Both public members and protected members of the base class will become private in the derived class. Private mode is the default mode that is applied when we don't specify any mode.


Effects of Inheritance
Let's see how different components of class are affected in inheritance:

Static Members and Inheritance
In C++, static members belong to the class itself, not to any object. This means static variables and methods are shared across all instances of the class. When it comes to inheritance, static members from the base class are not inherited by the derived class in the traditional way. However, they can still be accessed using the class name like className::staticMember.

Friend Function and Class in Inheritance
Friend functions and classes in inheritance provides functions or classes to access private and protected members of a class, providing flexibility and better control over class interactions. In inheritance, friend function and classes are not inherited by the base class. It means that the classes and functions declared as friends for the base class does not automatically become a friend for derived class.

Constructors and Destructors in Inheritance
Constructors and Destructors are generally defined by the programmer and if not, the compiler automatically creates them, so they are present in every class in C++. Now, the question arises what happens to the constructor and destructor when a class is inherited by another class.

In C++ inheritance, the constructors and destructors are not inherited by the derived class, but we can call the constructor of the base class in derived class.

The constructors will be called by the complier in the order in which they are inherited. It means that base class constructors will be called first, then derived class constructors will be called.
The destructors will be called in reverse order in which the compiler is declared.
We can also call the constructors and destructors manually in the derived class.