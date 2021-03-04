#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string word;
    if (cin >> word)
    {
        string output;
        for (auto c : word)
        {
            if (!ispunct(c))
            {
                output += c;
            }
        }

        cout << output << endl;
    }
}
