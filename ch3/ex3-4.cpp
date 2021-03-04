#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string word1, word2;
    cout << "Enter two words: " << endl;
    cin >> word1 >> word2;

    if (word1 > word2)
    {
        cout << word1 << " is larger" << endl;
    }
    else if (word1 < word2)
    {
        cout << word2 << " is larger" << endl;
    }

    if (word1.size() > word2.size())
    {
        cout << word1 << " is longer" << endl;
    }
    else if (word1.size() < word2.size())
    {
        cout << word2 << " is longer" << endl;
    }
}
