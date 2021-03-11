#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

void printIntVec(vector<int> &v)
{
    cout << v.size() << endl;

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << "\n********" << endl;
}

void printStrVec(vector<string> &v)
{
    cout << v.size() << endl;

    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << "\n********" << endl;
}

int main()
{
    vector<int> v1;
    printIntVec(v1);

    vector<int> v2(10);
    printIntVec(v2);

    vector<int> v3(10, 42);
    printIntVec(v3);

    vector<int> v4{10};
    printIntVec(v4);

    vector<int> v5{10, 42};
    printIntVec(v5);
    vector<string> v6{10};
    printStrVec(v6);

    vector<string> v7{10, "hi"};
    printStrVec(v7);
}
