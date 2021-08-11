#include <vector>
#include <utility>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::vector<std::pair<std::string, int>> inputs;
    std::string s;
    int i;
    while (cin >> s >> i)
    {
        inputs.push_back(std::make_pair(s, i));
    }

    for (const auto& ele : inputs)
    {
        cout << ele.first << " " << ele.second << endl;
    }
}

