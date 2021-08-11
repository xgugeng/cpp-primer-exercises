#include <iostream>
#include <map>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cout;
using std::endl;

int main()
{
    std::map<string, vector<string>> families;
    string lastName = "Curry";
    vector<string> children = {"Stephen", "Seth"};
    for (const auto &cd : children)
    {
        families[lastName].push_back(cd);
    }

    for (const auto &dis : families)
    {
        cout << dis.first << ":";
        for (const auto &cd : dis.second)
        {
            cout << " " << cd;
        }
        cout << endl;
    }
}
