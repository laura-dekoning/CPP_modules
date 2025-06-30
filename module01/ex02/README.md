# Exercise: String Memory Addresses and Values

## Objective

Write a C++ program that demonstrates the use of pointers and references with strings.  
The program must:
- Contain a string variable initialized to `"HI THIS IS BRAIN"`.
- Create a pointer (`stringPTR`) to the string.
- Create a reference (`stringREF`) to the string.
- Print the memory addresses associated with the string, the pointer, and the reference.
- Print the values pointed or referred to by each.

---

## Explanation

### 1. Variable Declarations

```cpp
std::string string = "HI THIS IS BRAIN";
std::string *stringPTR = &string;
std::string &stringREF = string;
```

- `string`: a standard string variable storing the text `"HI THIS IS BRAIN"`.
- `stringPTR`: a pointer that holds the address of `string`. It can be used to access or modify `string` via dereferencing.
- `stringREF`: a reference (alias) to `string`. It behaves as another name for `string`.

---

### 2. Printing Memory Addresses

```cpp
std::cout << &string << std::endl;      // Memory address of string
std::cout << stringPTR << std::endl;    // Memory address held by pointer (should match &string)
std::cout << &stringREF << std::endl;   // Memory address of reference (should match &string)
```

- `&string` prints the actual memory address where the string variable is stored.
- `stringPTR` prints the address it points to (since `stringPTR = &string`, this matches `&string`).
- `&stringREF` prints the address of the reference. Since a reference is just another name for the variable, this also matches `&string`.

---

### 3. Printing Values

```cpp
std::cout << string << std::endl;       // Value of string
std::cout << *stringPTR << std::endl;   // Value pointed to by pointer
std::cout << stringREF << std::endl;    // Value referred to by reference
```

- `string` prints the original string value.
- `*stringPTR` prints the value at the address stored in `stringPTR` (which is the same as `string`).
- `stringREF` prints the value referred to by the reference (which is also the same as `string`).

---

## Example Output

Assuming your program is named `brain.cpp`, running it will produce output similar to:

```
0x7ffee6b3b8a0
0x7ffee6b3b8a0
0x7ffee6b3b8a0
HI THIS IS BRAIN
HI THIS IS BRAIN
HI THIS IS BRAIN
```

- The three addresses should be identical, showing that all are referring to the same memory location.
- The three values printed are also identical.

---

## Key Takeaways

- **Pointers** store the address of variables and can be used to access or modify the data at that address.
- **References** are aliases for existing variables. They must be initialized at declaration and cannot be reseated.
- Both pointers and references provide ways to access the same data, but pointers can be reassigned and can be null, while references cannot.

---