# 4 Expressions

## Exercise 4.1

> What is the value returned by 5 + 10 * 20/2?

105

## Exercise 4.2

> Using Table 4.12 (p. 166), parenthesize the following expressions to indicate the order in which the operands are grouped:

(a) * vec.begin()
(b) * vec.begin() + 1

```cpp
* vec.begin() //=> *(vec.begin())
* vec.begin() + 1 //=> (*(vec.begin())) + 1
```

## Exercise 4.3

> Order of evaluation for most of the binary operators is left undefined to give the compiler opportunities for optimization. This strategy presents a trade-off between efficient code generation and potential pitfalls in the use of the language by the programmer. Do you consider that an acceptable trade-off? Why or why not?

Yes, performance benefit.

## Exercise 4.4

> Parenthesize the following expression to show how it is evaluated. Test your answer by compiling the expression (without parentheses) and printing its result.

12 / 3 * 4 + 5 * 15 + 24 % 4 / 2

```cpp
((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2)
```

## Exercise 4.5

> Determine the result of the following expressions.

(a) -30 * 3 + 21 / 5
(b) -30 + 3 * 21 / 5
(c) 30 / 3 * 21 % 5
(d) -30 / 3 * 21 % 4

```cpp
-30 * 3 + 21 / 5  // -90+4 = -86
-30 + 3 * 21 / 5  // -30+63/5 = -30+12 = -18
30 / 3 * 21 % 5   // 10*21%5 = 210%5 = 0
-30 / 3 * 21 % 4  // -10*21%4 = -210%4 = -2
```

# Exercise 4.6

> Write an expression to determine whether an int value is even or odd.

```cpp
value & 0x1 
```

## Exercise 4.7

> What does overflow mean? Show three expressions that will overflow.

Overflow happens when a value is computed that is outside the range of values that the type can represent.

```cpp
short svalue = 32767; ++svalue; // -32768
unsigned uivalue = 0; --uivalue;  // 4294967295
unsigned short usvalue = 65535; ++usvalue;  // 0
```

## Exercise 4.8

> Explain when operands are evaluated in the logical AND, logical OR, and equality operators.

The logical AND and OR operators always evaluate their left operand before the right. Moreover, the right operand is evaluated if and only if the left operand does not determine the result. This strategy is known as short-circuit evaluation.

`==`: undefined

## Exercise 4.9

> Explain the behavior of the condition in the following if:

```cpp
const char *cp = "Hello World";
if (cp && *cp) // if cp is nullptr and first char of cp is nonzero
```

## Exercise 4.10

> Write the condition for a while loop that would read ints from the standard input and stop when the value read is equal to 42.

```cpp
int i = 0;
while(cin >> i && i != 42)
```

## Exercise 4.11

> Write an expression that tests four values, a, b, c, and d, and ensures that a is greater than b, which is greater than c, which is greater than d.

```cpp
a > b && b >> c && c >> d
```

## Exercise 4.12

> Assuming i, j, and k are all ints, explain what i != j < k means.

equivalent to `i != (j < k)`

## Exercise 4.13

> What are the values of i and d after each assignment?

`int i;   double d;`

(a) d = i = 3.5; // i: 3, d: 3
(b) i = d = 3.5; // d: 3.5, i: 3

## Exercise 4.14

> Explain what happens in each of the if tests:

```cpp
if (42 = i)   // complie error: expression is not assignable
if (i = 42)   // true, 2 is assigned to i
```

## Exercise 4.15

> The following assignment is illegal. Why? How would you correct it?

```cpp
double dval; int ival; int *pi;
dval = ival = pi = 0; // => dval = ival = 0; pi = 0;
```

## Exercise 4.16

> Although the following are legal, they probably do not behave as the programmer expects. Why? Rewrite the expressions as you think they should be.

(a) if (p = getPtr() != 0) // => (p = getPtr()) != 0
(b) if (i = 1024) // => i == 1024

## Exercise 4.17: Explain the difference between prefix and postfix increment.

[c - What is the difference between ++i and i++? - Stack Overflow](https://stackoverflow.com/questions/24853/what-is-the-difference-between-i-and-i)

## Exercise 4.18

> What would happen if the while loop on page 148 that prints the elements from a vector used the prefix increment operator?

It will print from the second element and dereference v.end() at last, which is a UB.

## Exercise 4.19

> Given that ptr points to an int, that vec is a vector<int>, and that ival is an int, explain the behavior of each of these expressions. Which, if any, are likely to be incorrect? Why? How might each be corrected?

(a) ptr != 0 && *ptr++ // check ptr is not a nullptr, and then check the pointer value.
(b) ival++ && ival // check ival, and then check ival+1 whether equal zero.
(c) vec[ival++] <= vec[ival] // undefined

## Exercise 4.20:

> Assuming that iter is a vector<string>::iterator, indicate which, if any, of the following expressions are legal. Explain the behavior of the legal expressions and why those that aren’t legal are in error.

(a) *iter++; // legal, *(iter++)
(b) (*iter)++; // illegal, *iter is a string
(c) *iter.empty() // illegal, iter should use '->' to indicate whether empty.
(d) iter->empty(); // legal
(e) ++*iter; // illegal, *iter is a string
(f) iter++->empty(); // return iter->empty(), then ++iter.

## Exercise 4.21

> Write a program to use a conditional operator to find the elements in a vector<int> that have odd value and double the value of each such element.

[ex4-21.cpp](ex4-21.cpp)

## Exercise 4.22

> Extend the program that assigned high pass, pass, and fail grades to also assign low pass for grades between 60 and 75 inclusive. Write two versions: One version that uses only conditional operators; the other should use one or more if statements. Which version do you think is easier to understand and why?

[ex4-22.cpp](ex4-22.cpp)

## Exercise 4.23

> The following expression fails to compile due to operator precedence. Using Table 4.12 (p. 166), explain why it fails. How would you fix it?

```cpp
string s = "word";
string pl = s + s[s.size() - 1] == 's' ? "" : "s" ; // => string pl = s + (s[s.size() - 1] == 's' ? "" : "s") ;
```

## Exercise 4.24

> Our program that distinguished between high pass, pass, and fail depended on the fact that the conditional operator is right associative. Describe how that operator would be evaluated if the operator were left associative.

If the operator were left associative:

```cpp
finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";
// =>
finalgrade = ((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass";
```

## Exercise 4.25

> What is the value of ~'q' << 6 on a machine with 32-bit ints and 8 bit chars, that uses Latin-1 character set in which 'q' has the bit pattern 01110001?

The final value in decimal is -7296.

## Exercise 4.26

> In our grading example in this section, what would happen if we used unsigned int as the type for quiz1?

The minimum range of unsigned int is 0 to 65535. This could cause undefined behavior.

## Exercise 4.27

> What is the result of each of these expressions?

unsigned long ul1 = 3, ul2 = 7;

(a) ul1 & ul2 // 3
(b) ul1 | ul2 // 7
(c) ul1 && ul2 // true
(d) ul1 || ul2 // true

## Exercise 4.28

> Write a program to print the size of each of the built-in types.

[ex4-28.cpp](ex4-28.cpp)

## Exercise 4.29

> Predict the output of the following code and explain your reasoning. Now run the program. Is the output what you expected? If not, figure out why.

```cpp
int x[10];   int *p = x;
cout << sizeof(x)/sizeof(*x) << endl; // 10
cout << sizeof(p)/sizeof(*p) << endl; // undefined
```

## Exercise 4.30

> Using Table 4.12 (p. 166), parenthesize the following expressions to match the default evaluation:

(a) sizeof x + y => (sizeof x)+y 
(b) sizeof p->mem[i] => sizeof(p->mem[i])
(c) sizeof a < b => sizeof(a) < b
(d) sizeof f() => if f() returns void, the statement is undefined, otherwise it returns the size of return type

## Exercise 4.31: 

> The program in this section used the prefix increment and decrement operators. Explain why we used prefix and not postfix. What changes would have to be made to use the postfix versions? Rewrite the program using postfix operators.

```cpp
for(vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)  
    ivec[ix] = cnt;
```

## Exercise 4.32: Explain the following loop.

```cpp
constexpr int size = 5;
int ia[size] = {1,2,3,4,5};
for (int *ptr = ia, ix = 0;
     ix != size && ptr != ia+size;
     ++ix, ++ptr)   { /* ...   */ }
```

`ptr` and `ix` have the same function.

## Exercise 4.33

> Using Table 4.12 (p. 166) explain what the following expression does:

```cpp
someValue ? ++x, ++y : --x, --y // => (someValue ? ++x, ++y : --x), --y
```

## Exercise 4.34

> Given the variable definitions in this section, explain what conversions take place in the following expressions:

(a) if (fval) // => fval is converted to bool
(b) dval = fval + ival; // ival is converted to float, then the sum is converted to double
(c) dval + ival * cval; // cval is converted to int, then the sum is converted to double

Remember that you may need to consider the associativity of the operators.

## Exercise 4.35: Given the following definitions,

```cpp
char cval;     int ival;    unsigned int ui;
float fval;    double dval;
```

identify the implicit type conversions, if any, taking place:

(a) cval = 'a' + 3; // 'a' is promoted to int, then the sum is converted to char
(b) fval = ui - ival * 1.0; // ival converted to double, ui is also converted to double, then that double converted to float
(c) dval = ui * fval; // ui converted to float, then float to double
(d) cval = ival + fval + dval; // ival is converted to float, that sum is converted to double. The result is a char

## Exercise 4.36

> Assuming i is an int and d is a double write the expression i *= d so that it does integral, rather than floating-point, multiplication.

```cpp
i *= static_cast<int>(d);
```

## Exercise 4.37

> Rewrite each of the following old-style casts to use a named cast:

```cpp
int i;  double d;  const string *ps;  char *pc;  void *pv;
```

(a) pv = (void*)ps; // const_cast<string*>(ps)
(b) i = int(*pc); // static_cast<int>(*pc)
(c) pv = &d; // static_cast<void*>(&d)
(d) pc = (char*) pv; // static_cast<char*>(pv)

## Exercise 4.38: Explain the following expression:

```cpp
double slope = static_cast<double>(j/i);
```

`j/i` is an int, then converted to double.
