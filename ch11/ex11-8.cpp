#include <vector>
#include <map>
#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::map<string, size_t> word_count;
    std::vector<string> exclude = {"the", "but", "and", "or", "an", "a",
                       "The", "But", "And", "Or", "An", "A"};

    string word;
    while (cin >> word)
    {
        bool isExcluded = false;
        for (const auto &e : exclude)
        {
            if (e == word)
            {
                isExcluded = true;
                break;
            }
        }

        if (!isExcluded)
        {
            ++word_count[word];
        }
    }

    for (const auto &dis: word_count)
    {
        cout << dis.first << " => " << dis.second << endl;
    }
}
