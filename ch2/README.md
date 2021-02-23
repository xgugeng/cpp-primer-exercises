# Variables and Basic Types

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

## Exercise 2.26

Which of the following are legal? For those that are illegal, explain why.

(a) const int buf; // illegal, not initialized
(b) int cnt = 0; // legal
(c) const int sz = cnt; // legal, copy happens
(d) ++cnt; ++sz; // illegal, cannot change a const variable
