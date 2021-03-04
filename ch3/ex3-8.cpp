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
        decltype(word.size()) i = 0;
        while (i < word.size())
        {
            word[i] = 'X';
            ++i;
        }

        cout << word << endl;
    }

    if (cin >> word)
    {
        for (decltype(word.size()) i = 0; i < word.size(); ++i)
        {
            word[i] = 'X';
        }

        cout << word << endl;
    }
}
