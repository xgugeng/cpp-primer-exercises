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
        letter = g < 60 ? scores[0] : scores[(g - 50) / 10];
        letter += (g < 60 || g == 100) ? "" : (g % 10 > 7) ? "+" : (g % 10 < 3) ? "-" : "";
        cout << letter << endl;
    }
}