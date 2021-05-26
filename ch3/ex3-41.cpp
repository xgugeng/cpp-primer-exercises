#include <vector>
#include <iostream>

using std::vector;
using std::begin;
using std::end;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> v1(begin(arr), end(arr));
    
    for (auto i : v1)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
