#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v{0, 1, 2, 3, 4};
    int arr[5];

    for (decltype(v.size()) i = 0; i != v.size(); ++i)
    {
        arr[i] = v[i];
    }

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}
