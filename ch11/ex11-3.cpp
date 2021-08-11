#include <map>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    std::map<string, int> word_count;
    string word;
    while (cin >> word)
    {
        ++word_count[word];
    }

    for (auto& dis : word_count)
    {
        cout << dis.first << " => " << dis.second << endl;
    }
}
