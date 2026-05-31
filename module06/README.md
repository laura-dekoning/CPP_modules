CPP Module 06 - Casts
Overview

This module introduces the four C++ casting operators and their specific use cases:

static_cast
dynamic_cast
const_cast
reinterpret_cast

Unlike C-style casts, these casts make conversions explicit and safer.

Cast Types
static_cast

Used for standard type conversions that can be checked at compile time.

int i = 42;
double d = static_cast<double>(i);
dynamic_cast

Used with polymorphic inheritance to safely convert pointers or references between related classes.

Base* base = new Derived();
Derived* derived = dynamic_cast<Derived*>(base);

Returns NULL for pointers if the cast fails and throws an exception for references.

const_cast

Used to add or remove const qualifiers.

const int x = 42;
int* ptr = const_cast<int*>(&x);
reinterpret_cast

Used for low-level conversions between unrelated pointer or integer types.

Data* data = new Data;
uintptr_t raw = reinterpret_cast<uintptr_t>(data);

Use with care, as it does not perform safety checks.

Exercises
ex00 - Scalar Converter

Convert between scalar types (char, int, float, double).

Expected cast: static_cast.

ex01 - Serializer

Convert a pointer to an integer and back.

Expected cast: reinterpret_cast.

ex02 - Identify Real Type

Determine the actual type of an object through a base-class pointer or reference.

Expected cast: dynamic_cast.

Key Point

Each exercise is designed to demonstrate a specific cast. During evaluation, be prepared to explain:

Why the chosen cast is appropriate.
Why the other casts are not suitable.
The differences between the four casting operators.