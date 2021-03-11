#include <vector>
#include <iostream>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
    auto begin = scores.begin();

    unsigned grade;
    while (cin >> grade) 
    {      // read the grades
        if (grade <= 100)
        {
            auto ind = grade/10;
            *(begin+ind) += 1;
        }
    }

    for (auto i : scores)
    {
        cout << i << " ";
    }
    cout << endl;
}
