#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<string> vec;
    string word;
    while (cin >> word)
    {
        vec.push_back(word);
    }

    int i = 0;
    for (auto &w : vec)
    {
        for (auto &c : w)
        {
            c = toupper(c);
        }

        cout << w << " ";
        if (i >= 7)
        {
            cout << endl;
            i = 0;
        }
        else
        {
            ++i;
        }
    }
}
