#include <iostream>

using namespace std;

int main()
{
    int num, numOfNegative = 0;
    cout << "Enter a few numbers: " << endl;

    while (cin >> num)
    {
        if (num < 0)
        {
            ++numOfNegative;
        }
    }
    cout << "You entered " << numOfNegative << " negative numbers!" << endl;

    return 0;
}
