#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1("foo"), s2("bar");
    if (s1 == s2)
    {
        cout << "Equal strings" << endl;
    }
    else if (s1 > s2)
    {
        cout << s1 << " > " << s2 << endl;
    }
    else
    {
        cout << s1 << " < " << s2 << endl;
    }

    const char* cs1 = "foo";
    const char* cs2 = "bar";
    if (strcmp(cs1, cs2) == 0)
    {
        cout << "Equal strings" << endl;
    }
    else
    {
        cout << cs1 << " != " << cs2 << endl;
    }
}
