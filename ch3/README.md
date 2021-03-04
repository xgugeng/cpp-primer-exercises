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