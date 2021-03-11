#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> text;
    string line;
    while (getline(cin, line))
    {
        text.push_back(line);
    }

    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
    {
        for (auto &c : *it)
        {
            if (isalpha(c))
            {
                c = toupper(c);
            }
        }
        cout << *it << " ";
    }

    cout << endl;
}
