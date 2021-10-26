#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    char rsp;
    do
    {
        cout << "Enter 2 strings: ";
        string s1, s2;
        cin >> s1 >> s2;
        cout << (s1 <= s2 ? s1: s2) << " is less than the other" << endl;

        cout << "Continue? y or n: ";
        cin >> rsp;
    } while (rsp == 'y');
}