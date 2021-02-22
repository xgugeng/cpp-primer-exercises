#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item lastItem, curItem;
    if (std::cin >> lastItem)
    {
        int cnt = 1;
        while (std::cin >> curItem)
        {
            if (curItem.isbn() == lastItem.isbn())
            {
                ++cnt;
            }
            else
            {
                std::cout << lastItem << " occurs " << cnt << " times " << std::endl;
                lastItem = curItem;
                cnt = 1;
            }
        }
        std::cout << lastItem << " occurs "<< cnt << " times " << std::endl;
    }
    return 0;
}
