#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    int g;
    while (cin >> g)
    {
        string letter;
        if (g < 60)
        {
            letter = scores[0];
        }
        else
        {
            letter = scores[(g - 50) / 10];
            if (g != 100)
            {
                letter += g % 10 > 7 ? "+" : g % 10 < 3 ? "-" : "";
            }
        }

        cout << letter << endl;
    }
}