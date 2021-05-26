#include <iostream>
#include <vector>

using std::vector;
using std::cout;

int main()
{
    int arr[10];
    for (size_t i = 0; i < 10; ++i)
    {
        arr[i] = i;
    }

    int arr2[10];
    for (size_t i = 0; i < 10; ++i)
    {
        arr2[i] = arr[i];
    }
    for (auto i : arr2)
    {
        cout << i << " ";
    }
    cout << '\n';

    vector<int> v(10);
    for (size_t i = 0; i < 10; ++i)
    {
        v[i] = arr[i];
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << '\n';
}
