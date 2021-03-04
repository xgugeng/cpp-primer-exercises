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
        concat += buffer;
    }

    cout << "The concatenated string is " << concat << endl;
}
