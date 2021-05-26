#include <iostream>
#include <iterator>
#include <vector>

using std::cout;using std::endl;
using std::vector;
using std::begin; using std::end;

bool compare(int* const pb1, int* const pe1, int* const pb2, int* const pe2)
{
    if ((pe1 - pb1) != (pe2 - pb2))
    {
        return false;
    }
    else
    {
        for (int* i = pb1, *j = pb2; (i < pe1) && (j < pe2); ++i, ++j)
        {
            if (*i != *j) 
            {
                return false;
            }
        }
    }

    return true;
}


int main()
{
    int arr1[3] = { 0, 1, 2 };
    int arr2[3] = { 0, 2, 4 };

    cout << "The two arrays are "
        << (compare(begin(arr1), end(arr1), begin(arr2), end(arr2)) ? "equal" : "not equal")
        << endl;

    vector<int> vec1 = { 0, 1, 2 };
    vector<int> vec2 = { 0, 1, 2 };
    cout << "The two vectors are "
        << (vec1 == vec2 ? "equal" : "not equal")
        << endl;
}
