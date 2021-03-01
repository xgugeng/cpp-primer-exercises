#include <iostream>

int main()
{
    std::cin >> int input_value; // error: expected primary-expression before ‘int’
    int i = { 3.14 }; // error: narrowing conversion of ‘3.1400000000000001e+0’ from ‘double’ to ‘int’
    double salary = wage = 9999.99; // error: ‘wage’ was not declared in this scope
    int i = 3.14; // ok, but 3.14 is truncated to 3
}
