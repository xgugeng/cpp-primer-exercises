# Variables and Basic Types

## Exercise 2.1

What are the differences between int, long, long long, and short?
> gugeng: They are all signed, with different minimum size for integer.

Between an unsigned and a signed type?
> gugeng: A signed type represents negative or positive numbers (including zero); an unsigned type represents only values greater than or equal to zero.

Between a float and a double?
> gugeng: Typically, floats are represented in one word (32 bits), doubles in two words (64 bits). `float` usually does not have enough precision.

## Exercise 2.2

To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type.

> gugeng: double for all, fore precision

## Exercise 2.3

What output will the following code produce?

```cpp
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl; // 32
std::cout << u - u2 << std::endl; // the result will wrap around

int i = 10, i2 = 42;
std::cout << i2 - i << std::endl; // 32
std::cout << i - i2 << std::endl; // -32

std::cout << i - u << std::endl; // 0 
std::cout << u - i << std::endl; // 0

i = -1
std::cout << i - u << std::endl; //  the result will wrap around
std::cout << u - i << std::endl; // 11
```

## Exercise 2.4

Write a program to check whether your predictions were correct. If not, study this section until you understand what the problem is.

## Exercise 2.5

Determine the type of each of the following literals. Explain the differences among the literals in each of the four examples:

(a) 'a', L'a', "a", L"a" // character literal, wide char literal, string literal, string wide char literal
(b) 10, 10u, 10L, 10uL, 012, 0xC // decimal, unsigned decimal, long decimal, unsigned long decimal, octal, hex
(c) 3.14, 3.14f, 3.14L // double, float, long double
(d) 10, 10u, 10., 10e-2 // decimal, unsigned decimal, double, double

## Exercise 2.6

What, if any, are the differences between the following definitions:

```cpp
int month = 9, day = 7; // decimal, decimal
int month = 09, day = 07; // invalid octal digit, octal
```

## Exercise 2.7

What values do these literals represent? What type does each have?

(a) "Who goes with F\145rgus?\012" // string
(b) 3.14e1L // long double
(c) 1024f // invalid, no floating point
(d) 3.14L // long double

## Exercise 2.8

Using escape sequences, write a program to print 2M followed by a newline. Modify the program to print 2, then a tab, then an M, followed by a newline.

## Exercise 2.26

Which of the following are legal? For those that are illegal, explain why.

(a) const int buf; // illegal, not initialized
(b) int cnt = 0; // legal
(c) const int sz = cnt; // legal, copy happens
(d) ++cnt; ++sz; // illegal, cannot change a const variable
