#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char c;
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    while (cin >> c)
    {
        if (c == 'a')
        {
            ++aCnt;
        } else if (c == 'e')
        {
            ++eCnt;
        } else if (c == 'i')
        {
            ++iCnt;
        } else if (c == 'o')
        {
            ++oCnt;
        } else if (c == 'u')
        {
            ++uCnt;
        }
    }

    cout << "Number of vowel a: " << aCnt << '\n'
        << "Number of vowel e: " << eCnt << '\n'
        << "Number of vowel i: " << iCnt << '\n'
        << "Number of vowel o: " << oCnt << '\n'
        << "Number of vowel u: " << uCnt << endl;
}