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

> gugeng: Double for all, fore precision

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

## Exercise 2.9

Explain the following definitions. For those that are illegal, explain what’s wrong and how to correct it.

(a) std::cin >> int input_value; // error: expected primary-expression before ‘int’
(b) int i = { 3.14 }; // error: narrowing conversion of ‘3.1400000000000001e+0’ from ‘double’ to ‘int’
(c) double salary = wage = 9999.99; // error: ‘wage’ was not declared in this scope
(d) int i = 3.14; // ok, but 3.14 is truncated to 3

## Exercise 2.10

What are the initial values, if any, of each of the following variables?

```cpp
std::string global_str; // empty string
int global_int; // 0
int main()
{
    int local_int; // undefined value
    std::string local_str; // empty string
}
```

## Exercise 2.11

Explain whether each of the following is a declaration or a definition:

(a) extern int ix = 1024; // definition
(b) int iy; // declaration
(c) extern int iz; // declaration

## Exercise 2.12

Which, if any, of the following names are invalid?

(a) int double = 3.14; // invalid
(b) int _; // valid
(c) int catch-22; // invalid
(d) int 1_or_2 = 1; // valid
(e) double Double = 3.14; // valid

## Exercise 2.13

What is the value of j in the following program?

```cpp
int i = 42;
int main()
{
    int i = 100;
    int j = i; // j=100
}
```

## Exercise 2.14

Is the following program legal? If so, what values are printed?

```cpp
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
     sum += i;
std::cout << i << " " << sum << std::endl;
```

> gugeng: It's legal, but the i in the for-loop is a local one covering the global i. i is 100 and sum is 45.

## Exercise 2.15

Which of the following definitions, if any, are invalid? Why?

(a) int ival = 1.01; // valid
(b) int &rval1 = 1.01; // invalid, initial value of reference to non-const must be a lvalue
(c) int &rval2 = ival; // valid
(d) int &rval3; // invalid, reference must be initialized

## Exercise 2.16

Which, if any, of the following assignments are invalid? If they are valid, explain what they do.

```cpp
int i = 0, &r1 = i; double d = 0, &r2 = d;
```

(a) r2 = 3.14159; // valid
(b) r2 = r1; // valid, implicit type conversion
(c) i = r2; // valid, implicit type conversion
(d) r1 = d; // valid, implicit type conversion

## Exercise 2.17

What does the following code print?

```cpp
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl; // print: 10 10
```

## Exercise 2.18

Write code to change the value of a pointer. Write code to change the value to which the pointer points.

## Exercise 2.19

Explain the key differences between pointers and references.

> gugeng:
>
> 1. reference is an alias to variable (not an object, without address), it must be initialized and cannot be copied.
> 2. pointer is an object, it can be assigned and copied, might not be initialized at the time it's defined

## Exercise 2.20

What does the following program do?

```cpp
int i = 42;
int *p1 = &i;
*p1 = *p1 * *p1; // i = 42*42
```

## Exercise 2.21

Explain each of the following definitions. Indicate whether any are illegal and, if so, why.


```cpp
int i = 0;
```

(a) double* dp = &i; // illegal, type mismatch
(b) int *ip = i; // illegal, initialize a pointer with int
(c) int *p = &i; // legal

## Exercise 2.22

Assuming p is a pointer to int, explain the following code:

```cpp
if (p) // if p is a null pointer
if (*p) // if the int p is pointing to is 0
```

## Exercise 2.23

Given a pointer p, can you determine whether p points to a valid object? If so, how? If not, why not?

> gugeng: NO, the pointer points to a address, we need more info to detect it

## Exercise 2.24

Why is the initialization of p legal but that of lp illegal?

```cpp
int i = 42;
void *p = &i;
long *lp = &i;
```

> gugeng: `void*` is a special pointer type that can hold the address of any object, but the type of the object is unknown. While the type of `lp` is `long*`, it can only point to a long variable

## Exercise 2.25

Determine the types and values of each of the following variables.

(a) int* ip, i, &r = i;
> gugeng: ip is a pointer, i is an int, r is a reference to i

(b) int i, *ip = 0;
> gugeng: ip is an invalid pointer, i is an int

(c) int* ip, ip2;
> gugeng: ip is a pointer, ip2 in an int

## Exercise 2.26

Which of the following are legal? For those that are illegal, explain why.

(a) const int buf; // illegal, not initialized
(b) int cnt = 0; // legal
(c) const int sz = cnt; // legal, copy happens
(d) ++cnt; ++sz; // illegal, cannot change a const variable

## Exercise 2.27

Which of the following initializations are legal? Explain why.

(a) int i = -1, &r = 0; // illegal, r must be initialized to a lvalue
(b) int *const p2 = &i2; // legal
(c) const int i = -1, &r = 0; // legal
(d) const int *const p3 = &i2; // legal
(e) const int *p1 = &i2; // legal
(f) const int &const r2; // illegal, r2 must be initialized
(g) const int i2 = i, &r = i; // legal

## Exercise 2.28

Explain the following definitions. Identify any that are illegal.

(a) int i, *const cp; // illegal, cp must be initialized
(b) int *p1, *const p2; // illegal, p2 must be initialized
(c) const int ic, &r = ic; // illegal, ic must be initialized
(d) const int *const p3; // illegal, p3 must be initialized
(e) const int *p; // legal

## Exercise 2.29

Uing the variables in the previous exercise, which of the following assignments are legal? Explain why.

(a) i = ic; // legal
(b) p1 = p3; // illegal, p3 is a const pointer to const int
(c) p1 = &ic; // illegal, ic is a const int
(d) p3 = &ic; // illegal, p3 is a const pointer
(e) p2 = p1; // illegal, p2 is a const pointer
(f) ic = *p3; // illegal, ic is a const int

## Exercise 2.30

For each of the following declarations indicate whether the object being declared has top-level or low-level const.

```cpp
const int v2 = 0;    int v1 = v2;
int *p1 = &v1, &r1 = v1;
const int *p2 = &v2, *const p3 = &i, &r2 = v2;
```

> gugeng: p2 is a low-level const. p3 is both top-level and lowe-level, r2 is low-level const

## Exercise 2.31

Given the declarations in the previous exercise determine whether the following assignments are legal. Explain how the top-level or low-level const applies in each case.

```cpp
r1 = v2; // legal, v2 is a top-level const, will be ignored
p1 = p2; // illegal, p2 is low-level const, while p1 is not
p2 = p1; // legal, implicitly convert int* to const int*
p1 = p3; // illegal, p3 is low level const, while p1 is not
p2 = p3; // legal, both low-level
```

## Exercise 2.32

Is the following code legal or not? If not, how might you make it legal?

```cpp
int null = 0, *p = null;
```

> gugeng: illegal, it might be `int null = 0, *p = nullptr`

## Exercise 2.33

Using the variable definitions from this section, determine what happens in each of these assignments:

```cpp
a = 42; // set a with 42
b = 42; // set b with 42
c = 42; // set c with 42
d = 42; // illegal, d is int*
e = 42; // illegal, e is const int*
g = 42; // illegal, g is const int&
```

## Exercise 2.34

Write a program containing the variables and assignments from the previous exercise. Print the variables before and after the assignments to check whether your predictions in the previous exercise were correct. If not, study the examples until you can convince yourself you know what led you to the wrong conclusion.

## Exercise 2.35

Determine the types deduced in each of the following definitions. Once you’ve figured out the types, write a program to see whether you were correct.

```cpp
const int i = 42;
auto j = i; const auto &k = i; auto *p = &i;
const auto j2 = i, &k2 = i;
```

> gugeng: j is int, k is const int&, p is a pointer to const int, j2 is const int, k2 is const int&

## Exercise 2.36

In the following code, determine the type of each variable and the value each variable has when the code finishes:

```cpp
int a = 3, b = 4;
decltype(a) c = a;
decltype((b)) d = a;
++c;
++d;
```

> gugeng: c is an int, b is int&. When the code finishes, all values is 4.

## Exercise 2.37

Assignment is an example of an expression that yields a reference type. The type is a reference to the type of the left-hand operand. That is, if i is an int, then the type of the expression i = x is int&. Using that knowledge, determine the type and value of each variable in this code:

```cpp
int a = 3, b = 4;
decltype(a) c = a;
decltype(a = b) d = a;
```

> gugeng: a:3, b:4, c:3, d:3, c is a int, d is int&.

## Exercise 2.38

Describe the differences in type deduction between decltype and auto. Give an example of an expression where auto and decltype will deduce the same type and an example where they will deduce differing types.

> gugeng: The important differences are:
>
> 1. The way decltype handles top-level const and references differs subtly from the way auto does
> 2. the deduction done by decltype depends on the form of its given expression.

```cpp
int i = 0, &r = i;
// same
auto a = i;
decltype(i) b = i;
// different "c" will be int "d" will be int&
auto c = r;
decltype(r) d = r; 
```

## Exercise 2.39

Compile the following program to see what happens when you forget the semicolon after a class definition. Remember the message for future reference.

```cpp
struct Foo { /* empty   */ } // Note: no semicolon
int main()
{
    return 0;
}
```

> gugeng:
> ex2-39.cpp:1:29: error: expected ‘;’ after struct definition

## Exercise 2.40

Write your own version of the Sales_data class

## Exercise 2.41

Use your Sales_data class to rewrite the exercises in § 1.5.1(p. 22), § 1.5.2(p. 24), and § 1.6(p. 25).

## Exercise 2.42

Write your own version of the Sales_data.h header and use it to rewrite the exercise from § 2.6.2 (p. 76).
