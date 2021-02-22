#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    Sales_item first;
    if (cin >> first)
    {
        Sales_item item;
        while (cin >> item)
        {
            if (first.isbn() == item.isbn())
            {
                first += item;
            }
        }
        cout << first << endl;
    }
    else
    {
        cerr << "No item input" << endl;
    }
}
