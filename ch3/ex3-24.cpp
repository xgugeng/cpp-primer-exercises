#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;


int main()
{
    vector<int> ivec;
    int i;
    while (cin >> i)
    {
        ivec.push_back(i);
    }
    
    if (ivec.size() <= 1)
    {
        cout << "not enough integers" << endl;
        return -1;
    }

    for (auto it = ivec.cbegin(); it < ivec.cend() - 1; ++it)
    {
        cout << *it + *(it+1) << " ";
    }
    cout << endl;

    for (auto s = ivec.cbegin(), e = ivec.cend() - 1; s <= e; ++s, --e)
    {
        cout << *s + *e << " ";
    }
    cout << endl;
}
