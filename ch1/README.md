# Getting Started

## Exercise 1.1

Review the documentation for your compiler and determine what file naming convention it uses.

## Exercise 1.2

Change the program to return -1. A return value of -1 is often treated as an indicator that the program failed. Recompile and rerun your program to see how your system treats a failure indicator from `main`.

修改程序使其返回 -1。

```shell
g++ ex1-2.cpp -o ex1-2
./ex1-2
echo $? # 255
```

## Exercise 1.3

Write a program to print `Hello, World` on the standard output.

## Exercise 1.4

Our program used the addition operator, +, to add two numbers. Write a program that uses the multiplication operator, *, to print the product instead.

## Exercise 1.5

We wrote the output in one large statement. Rewrite the program to use a separate statement to print each operand.

## Exercise 1.6

Explain whether the following program fragment is legal.

```cpp
std::cout << "The sum of " << v1;
		  << " and " << v2;
		  << " is " << v1 + v2 << std::endl;
```

If the program is legal, what does it do? If the program is not legal, why not? How would you fix it?

```
ex1-6.cpp: In function ‘int main()’:
ex1-6.cpp:9:5: error: expected primary-expression before ‘<<’ token
    9 |     << " and " << v2;
      |     ^~
ex1-6.cpp:10:5: error: expected primary-expression before ‘<<’ token
   10 |     << " is " << v1 + v2 << std::endl;
      |     ^~
```

## Exercise 1.7

Compile a program that has incorrectly nested comments.

```
g++ ex1-7.cpp
ex1-7.cpp:4:3: error: expected unqualified-id before ‘/’ token
    4 |  */
      |  
```

## Exercise 1.8

Indicate which, if any, of the following output statements are legal:

```cpp
std::cout << "/*"; ✅
std::cout << "*/"; ✅
std::cout << /* "*/" */; ❌
std::cout << /*  "*/" /* "/*"  */; ❌
```

After you’ve predicted what will happen, test your answers by compiling a program with each of these statements. Correct any errors you encounter.


The output of `g++ ex1-8.cpp`:

```
ex1-8.cpp:7:24: warning: missing terminating " character
    7 |     std::cout << /* "*/" */;
      |                        ^
```

## Exercise 1.9

Write a program that uses a while to sum the numbers from 50 to 100.

## Exercise 1.10

In addition to the ++ operator that adds 1 to its operand, there is a decrement operator (--) that subtracts 1. Use the decrement operator to write a while that prints the numbers from ten down to zero.

## Exercise 1.11

Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.

## Exercise 1.12

What does the following for loop do? What is the final value of sum?

```cpp
int sum = 0;
for (int i = -100; i <= 100; ++i)
    sum += i;
```

## Exercise 1.13

Rewrite the first two exercises using for loops.

## Exercise 1.14

Compare and contrast the loops that used a for with those using a while. Are there advantages or disadvantages to using either form?

> gugeng: It's easy to write a for loop if the incrementor is clear and simple

## Exercise 1.15

Write programs that contain the common errors discussed in the box on page 16. Familiarize yourself with the messages the compiler generates.

> gugeng: Syntax errors, type errors, declaration errors, which all can be detected by complier

## Exercise 1.16

Write your own version of a program that prints the sum of a set of integers read from cin.

## Exercise 1.17

What happens in the program presented in this section if the input values are all equal? What if there are no duplicated values?

> gugeng: If all input values are equal, only one log will be output. If no duplicated values, each line will be output after the second input.

## Exercise 1.18

Compile and run the program from this section giving it only equal values as input. Run it again giving it values in which no number is repeated.

## Exercise 1.19

Revise the program you wrote for the exercises in that printed a range of numbers so that it handles input in which the first number is smaller than the second.


## Exercise 1.20

http://www.informit.com/title/0321714113 contains a copy of Sales_item.h in the Chapter 1 code directory. Copy that file to your working directory. Use it to write a program that reads a set of book sales transactions, writing each transaction to the standard output.

## Exercise 1.21

Write a program that reads two Sales_item objects that have the same ISBN and produces their sum.

## Exercise 1.22

Write a program that reads several transactions for the same ISBN. Write the sum of all the transactions that were read.

## Exercise 1.23

Write a program that reads several transactions and counts how many transactions occur for each ISBN.

## Exercise 1.24

Test the previous program by giving multiple transactions representing multiple ISBNs. The records for each ISBN should be grouped together.

## Exercise 1.25

Using the Sales_item.h header from the Web site, compile and execute the bookstore program presented in this section.
