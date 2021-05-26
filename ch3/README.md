# Strings, Vectors, and Arrays

## Exercise 3.1

Rewrite the exercises from § 1.4.1 (p. 13) and § 2.6.2 (p. 76) with appropriate using declarations.

## Exercise 3.2

Write a program to read the standard input a line at a time. Modify your program to read a word at a time.

## Exercise 3.3

Explain how whitespace characters are handled in the string input operator and in the getline function.

> gugeng: `is >> s` separates the input by whitespace before reading into `s`. `getline` ignores the whitespaces before hitting a newline.

## Exercise 3.4

Write a program to read two strings and report whether the strings are equal. If not, report which of the two is larger. Now, change the program to report whether the strings have the same length, and if not, report which is longer.

## Exercise 3.5

Write a program to read strings from the standard input, concatenating what is read into one large string. Print the concatenated string. Next, change the program to separate adjacent input strings by a space.

## Exercise 3.6

Use a range for to change all the characters in a string to X.

## Exercise 3.7

What would happen if you define the loop control variable in the previous exercise as type char? Predict the results and then change your program to use a char to see if you were right.

> gugeng: The string won't change since the loop control variable is a copy of each char in the string.

## Exercise 3.8

Rewrite the program in the first exercise, first using a while and again using a traditional for loop. Which of the three approaches do you prefer and why?

> gugeng: For this scenario, I prefer the range for, since the index is not needed

## Exercise 3.9

What does the following program do? Is it valid? If not, why not?

```cpp
string s;
cout << s[0] << endl;
```

> gugeng: The code tries to print the first char of string s. It's invalid since string is empty;

## Exercise 3.10

Write a program that reads a string of characters including punctuation and writes what was read but with the punctuation removed.

## Exercise 3.11

Is the following range for legal? If so, what is the type of c?

```cpp
const string s = "Keep out!";
for (auto &c : s) { /* ...  */ }
```

> gugeng: The type of c is const char&. It might be legal only if the loop body doesn't change c.

## Exercise 3.12

Which, if any, of the following vector definitions are in error? For those that are legal, explain what the definition does. For those that are not legal, explain why they are illegal.

(a) vector<vector<int>> ivec; // legal
(b) vector<string> svec = ivec; // illegal, different type
(c) vector<string> svec(10, "null"); // legal, 10 nulls

## Exercise 3.13

How many elements are there in each of the following vectors? What are the values of the elements?

(a) vector<int> v1; // size: 0
(b) vector<int> v2(10); // size: 10, value: 0
(c) vector<int> v3(10, 42); // size: 10, value: 42
(d) vector<int> v4{10}; // size: 1, value: 10
(e) vector<int> v5{10, 42}; // size: 2, value: 10, 42
(f) vector<string> v6{10}; // size: 10, value: ""
(g) vector<string> v7{10, "hi"}; // size: 10, value: "hi"

## Exercise 3.14

Write a program to read a sequence of ints from cin and store those values in a vector.

## Exercise 3.15

Repeat the previous program but read strings this time.

## Exercise 3.16

Write a program to print the size and contents of the vectors from exercise 3.13. Check whether your answers to that exercise were correct. If not, restudy § 3.3.1 (p. 97) until you understand why you were wrong.

## Exercise 3.17

Read a sequence of words from cin and store the values a vector. After you’ve read all the words, process the vector and change each word to uppercase. Print the transformed elements, eight words to a line.

## Exercise 3.18

Is the following program legal? If not, how might you fix it?

```cpp
vector<int> ivec;
ivec[0] = 42;
```

> gugeng: Segmentation fault, since the size of `ivec` is 0.

## Exercise 3.19

List three ways to define a vector and give it ten elements, each with the value 42. Indicate whether there is a preferred way to do so and why.

## Exercise 3.20

Read a set of integers into a vector. Print the sum of each pair of adjacent elements. Change your program so that it prints the sum of the first and last elements, followed by the sum of the second and second-to-last, and so on.

## Exercise 3.21

Redo the first exercise from § 3.3.3 (p. 105) using iterators.

## Exercise 3.22

Revise the loop that printed the first paragraph in text to instead change the elements in text that correspond to the first paragraph to all uppercase. After you’ve updated text, print its contents.

## Exercise 3.23

Write a program to create a vector with ten int elements. Using an iterator, assign each element a value that is twice its current value. Test your program by printing the vector.

## Exercise 3.24

Redo the last exercise from § 3.3.3 (p. 105) using iterators.

## Exercise 3.25

Rewrite the grade clustering program from § 3.3.3 (p. 104) using iterators instead of subscripts.

## Exercise 3.26

In the binary search program on page 112, why did we write `mid= beg + (end - beg) / 2;` instead of `mid= (beg + end) /2;`?

> gugeng: NO operator `+` for two iterators.

## Exercise 3.27

Assuming `txt_size` is a function that takes no arguments and returns an int value, which of the following definitions are illegal? Explain why.

```cpp
unsigned buf_size = 1024;
```

(a) int ia[buf_size]; // illegal, not constant dimension
(b) int ia[4 * 7 - 14]; // legal
(c) int ia[txt_size()]; // illegal
(d) char st[11] = "fundamental"; // illegal, the size should be 12

## Exercise 3.28

What are the values in the following arrays?

```cpp
string sa[10]; // 10 empty strings
int ia[10]; // 10 zeros
int main() {
    string sa2[10]; // 10 empty strings
    int    ia2[10]; // undefined
}
```

## Exercise 3.29

List some of the drawbacks of using an array instead of a vector.

> gugeng: fixed size at compile time, lack of APIs like vector.

## Exercise 3.30

Identify the indexing errors in the following code:

```cpp
constexpr size_t array_size = 10;
int ia[array_size];
for (size_t ix = 1; ix <= array_size; ++ix)
      ia[ix] = ix;
```

> gugeng: if `ix` is equal to `array_size`, out of range.

## Exercise 3.31

Write a program to define an array of ten ints. Give each element the same value as its position in the array.

## Exercise 3.32

Copy the array you defined in the previous exercise into another array. Rewrite your program to use vectors.

## Exercise 3.33

What would happen if we did not initialize the scores array in the program on page 116?

> gugeng: All elements would be undefined

## Exercise 3.34

Given that p1 and p2 point to elements in the same array, what does the following code do? Are there values of p1 or p2 that make this code illegal?

```cpp
p1 += p2 - p1;
```

> gugeng: The above code would make `p1` points the address that `p2` already points to. If `p1` and `p2` are legal, the code is always legal

## Exercise 3.35

Using pointers, write a program to set the elements in an array to zero.

## Exercise 3.36

Write a program to compare two arrays for equality. Write a similar program to compare two vectors.

## Exercise 3.37

What does the following program do?

```cpp
const char ca[] = {'h', 'e', 'l', 'l', 'o'};
const char *cp = ca;
while (*cp) {
    cout << *cp << endl;
    ++cp;
}
```

> gugeng: The above program print each char in the array one by one.

## Exercise 3.38: In this section, we noted that it was not only illegal but meaningless to try to add two pointers. Why would adding two pointers be meaningless?

> [Addition of two pointers in c or c++ not supported. why? - Stack Overflow](https://stackoverflow.com/questions/25667580/addition-of-two-pointers-in-c-or-c-not-supported-why/25667730)

## Exercise 3.39

Write a program to compare two strings. Now write a program to compare the values of two C-style character strings.

## Exercise 3.40

Write a program to define two character arrays initialized from string literals. Now define a third character array to hold the concatenation of the two arrays. Use strcpy and strcat to copy the two arrays into the third.

## Exercise 3.41

Write a program to initialize a vector from an array of ints.

