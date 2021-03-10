#include <vector>

using std::vector;

int main()
{
    vector<int> v1(10, 42);
    vector<int> v2{ 42, 42, 42, 42, 42, 42, 42, 42, 42, 42 };
    vector<int> v3(10);
    for (decltype(v3.size()) i = 0; i < v3.size(); ++i)
    {
        v3[i] = 42;
    }
}
