# 5 Statements

## Exercise 5.1

> What is a null statement? When might you use a null statement?

null statement is a single semicolon, it is often used where the language requires a statement but the program's logic does not, like a empty loop.

## Exercise 5.2

> What is a block? When might you might use a block?

A block, is a (possibly empty) sequence of statements and declarations surrounded by a pair of curly braces. A block is a scope.

Compound statements are used when the language requires a single statement but the logic of our program needs more than one.

## Exercise 5.3

> Use the comma operator (§ 4.10) to rewrite the while loop from § 1.4.1 so that it no longer requires a block. Explain whether this rewrite improves or diminishes the readability of this code.

[ex5-3.cpp](ex5-3.cpp)

## Exercise 5.4

> Explain each of the following examples, and correct any problems you detect.

- (a) while (string::iterator iter != s.end()) { /* . . . */ }
- (b) while (bool status = find(word)) { /* . . . */ }
if (!status) { /* . . . */ }

(a) illegal declaration, which should be 

```cpp
string::iterator iter = s.begin();
while (iter != s.end()) {}
```

(b) `status` is only valid inside the `while` loop.

```cpp
bool status;
while (status = find(word)) { /* ... */ }
if (!status) { /* ... */ }
```

## Exercise 5.5

> Using an if–else statement, write your own version of the program to generate the letter grade from a numeric grade.

[ex5-5.cpp](ex5-5.cpp)

## Exercise 5.6

> Rewrite your grading program to use the conditional operator (§ 4.7, p. 151) in place of the if–else statement.

[ex5-6.cpp](ex5-6.cpp)

## Exercise 5.7

> Correct the errors in each of the following code fragments:

(a) if (ival1 != ival2)
    ival1 = ival2 // missing semicolon
else ival1 = ival2 = 0;

(b) if (ival < minval) // missing braces
    minval = ival;
    occurs = 1;

(c) if (int ival = get_value())
    cout << "ival = " << ival << endl;
if (!ival) // ival is out of scope
    cout << "ival = 0\n";

(d) if (ival = 0) // ==
    ival = get_value();

## Exercise 5.8

> What is a “dangling else”? How are else clauses resolved in C++?

Colloquial term used to refer to the problem of how to process nested if statements in which there are more ifs than elses. In C++, an else is always paired with the closest preceding unmatched if.

## Exercise 5.9

> Write a program using a series of if statements to count the number of vowels in text read from cin.

[ex5-9.cpp](ex5-9.cpp)

## Exercise 5.10

> There is one problem with our vowel-counting program as we’ve implemented it: It doesn’t count capital letters as vowels. Write a program that counts both lower- and uppercase letters as the appropriate vowel—that is, your program should count both 'a' and 'A' as part of aCnt, and so forth.

[ex5-10.cpp](ex5-10.cpp)

## Exercise 5.11

> Modify our vowel-counting program so that it also counts the number of blank spaces, tabs, and newlines read.

[ex5-11.cpp](ex5-11.cpp)

## Exercise 5.12

> Modify our vowel-counting program so that it counts the number of occurrences of the following two-character sequences: ff, fl, and fi.

[ex5-12.cpp](ex5-12.cpp)

## Exercise 5.13

> Each of the programs in the highlighted text on page 184 contains a common programming error. Identify and correct each error.

(a) unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
char ch = next_text();
switch (ch) {
    case 'a': aCnt++; // no break
    case 'e': eCnt++;
    default: iouCnt++;
}


(b) unsigned index = some_value();
switch (index) {
    case 1:
        int ix = get_value();
        ivec[ ix ] = index;
        break;
    default:
        ix = ivec.size()-1; // illegal, ix is not declared
        ivec[ ix ] = index;
}

(c) unsigned evenCnt = 0, oddCnt = 0;
int digit = get_num() % 10;
switch (digit) {
    case 1, 3, 5, 7, 9: // syntax error
        oddcnt++;
        break;
    case 2, 4, 6, 8, 10:
        evencnt++;
        break;
}

(d) unsigned ival=512, jval=1024, kval=4096;
unsigned bufsize;
unsigned swt = get_bufCnt();
switch(swt) {
    case ival: // label must be constant
        bufsize = ival * sizeof(int);
        break;
    case jval:
        bufsize = jval * sizeof(int);
        break;
    case kval:
        bufsize = kval * sizeof(int);
        break;
}

## Exercise 5.14

> Write a program to read strings from standard input looking for duplicated words. The program should find places in the input where one word is followed immediately by itself. Keep track of the largest number of times a single repetition occurs and which word is repeated. Print the maximum number of duplicates, or else print a message saying that no word was repeated. For example, if the input is
> how now now now brown cow cow
> the output should indicate that the word now occurred three times.

[ex5-14.cpp](ex5-14.cpp)

## Exercise 5.15: Explain each of the following loops. Correct any problems you detect.

(a) for (int ix = 0; ix != sz; ++ix)  { /* . . . */ }
if (ix != sz)
     // . . .

(b) int ix;
for (ix != sz; ++ix) { /* . . . */ }

(c) for (int ix = 0; ix != sz; ++ix, ++ sz)  { /* . . . */ }

Exercise 5.16: The while loop is particularly good at executing while some condition holds; for example, when we need to read values until end-of-file. The for loop is generally thought of as a step loop: An index steps through a range of values in a collection. Write an idiomatic use of each loop and then rewrite each using the other loop construct. If you could use only one loop, which would you choose? Why?

## Exercise 5.18

> Explain each of the following loops. Correct any problems you detect.

(a) do // missing braces
    int v1, v2;
    cout << "Please enter two numbers to sum:" ;
    if (cin >> v1 >> v2)
        cout << "Sum is: " << v1 + v2 << endl;
while (cin);

(b) do {
    // . . .
} while (int ival = get_response()); // should not declared in the loop

(c) do {
    int ival = get_response();
 } while (ival); // ival is out of scope

## Exercise 5.19

> Write a program that uses a do while loop to repetitively request two strings from the user and report which string is less than the other.

[ex5-19.cpp](ex5-19.cpp)