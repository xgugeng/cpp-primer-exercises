# 11 Associative Containers

## Exercise 11.1

> Describe the differences between a map and a vector.

`map` is an associative container, while `vector` is a sequence container.

## Exercise 11.2

> Give an example of when each of list, vector, deque, map, and set might be most useful.

1. `map` is best for dictionary.
2. `set` is most useful for some unique elements without order.
3. use `vector` when you need a dynamic array.
4. `list` is an alternative for double-linked list

## Exercise 11.3

> Write your own version of the word-counting program.

[ex11-3.cpp](ex11-3.cpp)

## Exercise 11.4

> Extend your program to ignore case and punctuation. For example, “example.” “example,” and “Example” should all increment the same counter.

## Exercise 11.5

> Explain the difference between a map and a set. When might you use one or the other?

`map` is for key-value pairs while `set` only has keys. Using which associative container depends on your task.

## Exercise 11.6

> Explain the difference between a set and a list. When might you use one or the other?

`set` is an associative container for without order, `list` is a sequence container with order.

## Exercise 11.7

> Define a map for which the key is the family’s last name and the value is a vector of the children’s names. Write code to add new families and to add new children to an existing family.

[ex11-7.cpp](ex11-7.cpp)

# Exercise 11.8

> Write a program that stores the excluded words in a vector instead of in a set. What are the advantages to using a set?

[ex11-8.cpp](ex11-8.cpp)

`set` provides O(1) complexity to find an excluded word while `vector` fails to.

## Exercise 11.12

> Write a program to read a sequence of strings and ints, storing each into a pair. Store the pairs in a vector.

[ex11-12.cpp](ex11-12.cpp)

## Exercise 11.13

> There are at least three ways to create the pairs in the program for the previous exercise. Write three versions of that program, creating the pairs in each way. Explain which form you think is easiest to write and understand, and why.

[ex11-13.cpp](ex11-13.cpp)

# Exercise 11.14

Extend the map of children to their family name that you wrote for the exercises in § 11.2.1 by having the vector store a pair that holds a child’s name and birthday.

#TODO
