# Dynamic Memory

## Exercise 12.1

> How many elements do b1 and b2 have at the end of this code?

```cpp
StrBlob b1;
{
    StrBlob b2 = {"a", "an", "the"};
    b1 = b2;
    b2.push_back("about");
}
```

b1 has 4 elements, b2 has been destroyed automatically

## Exercise 12.2

> Write your own version of the StrBlob class including the const versions of front and back.

[](ex12-2.h)

## Exercise 12.3

> Does this class need const versions of push_back and pop_back? If so, add them. If not, why aren’t they needed?

No reason for const `push_back`

## Exercise 12.4

> In our check function we didn’t check whether i was greater than zero. Why is it okay to omit that check?

Because the `size_type` is unsigned

## Exercise 12.5

> We did not make the constructor that takes an initializer_list explicit (§ 7.5.4, p. 296). Discuss the pros and cons of this design choice.

Pros:
1. No automatic conversion in constructor
Cons:
1. We can use the constructor to construct a temporary object

## Exercise 12.6

> Write a function that returns a dynamically allocated vector of ints. Pass that vector to another function that reads the standard input to give values to the elements. Pass the vector to another function to print the values that were read. Remember to delete the vector at the appropriate time.

[](ex12-6.cpp)

## Exercise 12.7

> Redo the previous exercise, this time using shared_ptr.

[](ex12-7.cpp)

## Exercise 12.8

> Explain what if anything is wrong with the following function.

```cpp
bool b() {
    int* p = new int;
    // ...
    return p;
}
```

p will convert to a bool, which means we cannot free the dynamic memory allocated any more.

## Exercise 12.9

> Explain what happens in the following code:

```cpp
int *q = new int(42), *r = new int(100);
r = q;
auto q2 = make_shared<int>(42), r2 = make_shared<int>(100);
r2 = q2;
```

Memory allocated for r is leaked after r = q. Using smart pointers for assignment is safe.

## Exercise 12.10

> Explain whether the following call to the process function defined on page 464 is correct. If not, how would you correct the call?

```cpp
shared_ptr<int> p(new int(42));
process(shared_ptr<int>(p));
```

Correct!

## Exercise 12.11

> What would happen if we called process as follows?

```cpp
process(shared_ptr<int>(p.get()));
```

Double free. shared_ptr<int>(p.get()) construct a temporary shared_ptr and copy it to the parameter.However it is not a copy of p. As a result, at end of this main function p will free the memory that has been freed inside process().

## Exercise 12.12

> Using the declarations of p and sp explain each of the following calls to process. If the call is legal, explain what it does. If the call is illegal, explain why:

```cpp
auto p = new int();
auto sp = make_shared<int>();
```

(a) process(sp); // legal, copy sp to process()
(b) process(new int()); // illegal, implicit conversion from plain pointer to smart pointer
(c) process(p); // illegal
(d) process(shared_ptr<int>(p)); // legal, but it's bad to mix raw pointer and smart pointer

## Exercise 12.13

> What happens if we execute the following code?

```cpp
auto sp = make_shared<int>();
auto p = sp.get();
delete p;
```

Double free

## Exercise 12.14

> Write your own version of a function that uses a shared_ptr to manage a connection.

[](ex12-14.cpp)

## Exercise 12.15

> Rewrite the first exercise to use a lambda (§ 10.3.2, p. 388) in place of the end_connection function.

[](ex12-15.cpp)

## Exercise 12.16

> Compilers don’t always give easy-to-understand error messages if we attempt to copy or assign a unique_ptr. Write a program that contains these errors to see how your compiler diagnoses them.

[](ex12-16.cpp)

clang++: ex12-16.cpp:6:26: error: call to deleted constructor of 'std::unique_ptr<int>'
g++: ex12-16.cpp:6:31: error: use of deleted function ‘std::unique_ptr<_Tp, _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp>&) [with _Tp = int; _Dp = std::default_delete<int>]’

## Exercise 12.17

> Which of the following unique_ptr declarations are illegal or likely to result in subsequent program error? Explain what the problem is with each one.

int ix = 1024, *pi = &ix, *pi2 = new int(2048);
typedef unique_ptr<int> IntP;

(a) IntP p0(ix);
(b) IntP p1(pi);
(c) IntP p2(pi2);
(d) IntP p3(&ix);
(e) IntP p4(new int(2048));
(f) IntP p5(p2.get());

## Exercise 12.18

> Why doesn’t shared_ptr have a release member?