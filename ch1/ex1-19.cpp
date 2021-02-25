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

    for (int i = lower; i <= upper; ++i)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
