#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string word;
    if (cin >> word)
    {
        for (auto &c : word)
        {
            c = 'X';
        }

        cout << word << endl;
    }
}
