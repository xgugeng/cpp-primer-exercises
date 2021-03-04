#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    const string s = "Keep out!";
    for (auto &c : s)
    {
        // c = 'X';
        cout << c << endl;
    }
}
