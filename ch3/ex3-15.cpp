#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cin;

int main()
{
    vector<string> svec;
    string str;
    while (cin >> str)
    {
        svec.push_back(str);
    }
}
