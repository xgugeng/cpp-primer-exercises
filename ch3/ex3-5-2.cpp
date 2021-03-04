#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string concat;
    string buffer;
    while (cin >> buffer)
    {
        concat += concat.empty() ? buffer : " " + buffer;
    }

    cout << "The concatenated string is " << concat << endl;
}
