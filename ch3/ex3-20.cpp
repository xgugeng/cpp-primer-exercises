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

    for (decltype(ivec.size())i = 0; i < ivec.size() - 1; ++i)
    {
        cout << ivec[i] + ivec[i+1] << " ";
    }
    cout << endl;

    // The middle element adds to itself if the size is odd
    for (int i = 0, j = ivec.size() - 1; i <= j; ++i, --j)
    {
        cout << ivec[i] + ivec[j] << " ";
    }
    cout << endl;
}
