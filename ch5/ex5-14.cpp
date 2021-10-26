#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string word, prev;
    unsigned cnt = 0, maxCnt = 0;
    while (cin >> word)
    {
        if (word == prev)
        {
            ++cnt;
        } else {
            cnt = 0;
        }

        maxCnt = (cnt > maxCnt ? cnt : maxCnt);

        prev = word;
    }

    cout << "Max number of duplicates is " << maxCnt + 1 << endl;
}