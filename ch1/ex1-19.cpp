#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Enter two numbers: " << endl;
    int v1, v2;
    cin >> v1 >> v2;

    int lower = v1;
    int upper = v2;
    if (v1 >= v2)
    {
        upper = v1;
        lower = v2;
    }

    int p = 0;
    for (int i = lower; i <= upper; ++i)
    {
        cout << i << " ";
        ++p;
        if (p >= 10)
        {
            cout << endl;
            p = 0;
        }
    }
    cout << endl;

    return 0;
}
