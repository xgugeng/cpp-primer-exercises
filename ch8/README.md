# 8 The IO Library

## Exercise 8.1

> Write a function that takes and returns an istream&. The function should read the stream until it hits end-of-file. The function should print what it reads to the standard output. Reset the stream so that it is valid before returning the stream.

[ex8-1.cpp](ex8-1.cpp)

## Exercise 8.2

> Test your function by calling it, passing cin as an argument.

[ex8-2.cpp](ex8-2.cpp)

## Exercise 8.3: 

> What causes the following while to terminate?

```cpp
while (cin >> i) /*  ...    */
```

If any of `badbit`, `failbit`, or `eofbit` are set, then a condition that evaluates that stream will fail.

## Exercise 8.4

> Write a function to open a file for input and read its contents into a vector of strings, storing each line as a separate element in the vector.

[ex8-4.cpp](ex8-4.cpp)

## Exercise 8.5

> Rewrite the previous program to store each word in a separate element.

[ex8-5.cpp](ex8-5.cpp)

## Exercise 8.6

> Rewrite the bookstore program from § 7.1.1 (p. 256) to read its transactions from a file. Pass the name of the file as an argument to main (§ 6.2.5, p. 218).

#todo

[ex8-6.cpp](ex8-6.cpp)

## Exercise 8.7

> Revise the bookstore program from the previous section to write its output to a file. Pass the name of that file as a second argument to main.

#todo

## Exercise 8.8

> Revise the program from the previous exercise to append its output to its given file. Run the program on the same output file at least twice to ensure that the data are preserved.

#todo

## Exercise 8.9

> Use the function you wrote for the first exercise in § 8.1.2 (p. 314) to print the contents of an istringstream object.

[ex8-9.cpp](ex8-9.cpp)

## Exercise 8.10

> Write a program to store each line from a file in a vector<string>. Now use an istringstream to read each element from the vector a word at a time.

[ex8-10.cpp](ex8-10.cpp)

## Exercise 8.11

> The program in this section defined its istringstream object inside the outer while loop. What changes would you need to make if record were defined outside that loop? Rewrite the program, moving the definition of record outside the while, and see whether you thought of all the changes that are needed.

[ex8-11.cpp](ex8-11.cpp)

## Exercise 8.12

> Why didn’t we use in-class initializers in PersonInfo?

We need an aggregate class to read line.

## Exercise 8.13

> Rewrite the phone number program from this section to read from a named file rather than from cin.

[ex8-13.cpp](ex8-13.cpp)

## Exercise 8.14

> Why did we declare entry and nums as const auto &?


1. reference is more effective for non built-in types.
2. we did not change their values in the loop. so we added the const.


