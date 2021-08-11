#include <map>
#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    std::map<string, int> word_count;
    string raw_word;
    while (cin >> raw_word)
    {
        raw_word.erase(std::remove_if(raw_word.begin(), raw_word.end(), ispunct),
            raw_word.end());
        for (auto& ch : raw_word) 
        {
            ch = tolower(ch);
        }
        ++word_count[raw_word];
    }

    for (auto& dis : word_count)
    {
        cout << dis.first << " => " << dis.second << endl;
    }
}
