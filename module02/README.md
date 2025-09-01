From now on, all your classes must be designed in the Orthodox Canonical Form,
unless explicitly stated otherwise. They will then implement the four required member
functions below:
• Default constructor
• Copy constructor
• Copy assignment operator
• Destructor

Orthodox Canonical Form:

Always pass your object by const references!!
1. Copy Constructor
📌 What it is

The copy constructor is called when you create a new object from an existing one.

	ClassName(const ClassName& other);

It gets a reference to another object of the same type and uses it to initialize the new one.

📌 When it’s used

• Passing an object by value to a function
• Returning an object by value from a function
• Explicitly writing:

	ClassName b(a);   // calls copy constructor
	ClassName b = a;  // also calls copy constructor (not assignment!)

📌 Why you need it

If your class manages resources on the heap (like new-allocated memory, file handles, sockets), the compiler-generated copy constructor does a shallow copy — it just copies the raw pointer, not the data it points to.
That means two objects now share the same resource, and when both destructors run → 💥 double delete.

By writing your own copy constructor, you ensure a deep copy: allocate new resources and duplicate the contents.

2. Copy Assignment Operator
📌 What it is

The copy assignment operator is called when you already have an object and want to replace its contents with another.

	ClassName& operator=(const ClassName& other);

It must return a reference to *this so you can chain assignments like a = b = c;.

📌 When it’s used

	String a("hello");
	String b("world");
	b = a;   // copy assignment operator


Notice: here b already exists before the assignment.

📌 Why you need it

If you just copied the raw pointer (shallow copy), you’d again have two objects pointing to the same memory. That leads to double frees and undefined behavior.

By writing your own copy assignment operator:

	1. You free the old resource of the left-hand object.
	2. You allocate new memory.
	3. You copy the content from the right-hand side.


You think you know integers and floating-point numbers. How cute.
Please read this 3 pages article (1, 2, 3) to discover that you don’t. Go on, read it.
Until today, every number you used in your code was basically either an integer or a
floating-point number, or any of their variants (short, char, long, double, and so forth).
After reading the article above, it’s safe to assume that integers and floating-point num-
bers have opposite characteristics.
But today, things will change. You are going to discover a new and awesome number
type: fixed-point numbers! Forever missing from the scalar types of most languages,
fixed-point numbers offer a valuable balance between performance, accuracy, range and
precision. That explains why fixed-point numbers are particularly applicable to computer
graphics, sound processing or scientific programming, just to name a few.
As C++ lacks fixed-point numbers, you’re going to add them. This article from
Berkeley is a good start. If you have no idea what Berkeley University is, read this
section of its Wikipedia page.
7C++ - Module 02
Ad-hoc polymorphism, operator overloading
and the Orthodox Canonical class form
Create a class in Orthodox Canonical Form that represents a fixed-point number:
• Private members:
◦ An integer to store the fixed-point number value.
◦ A static constant integer to store the number of fractional bits. Its value
will always be the integer literal 8.
• Public members:
◦ A default constructor that initializes the fixed-point number value to 0.
◦ A copy constructor.
◦ A copy assignment operator overload.
◦ A destructor.
◦ A member function int getRawBits( void ) const;
that returns the raw value of the fixed-point value.
◦ A member function void setRawBits( int const raw );
that sets the raw value of the fixed-point number.