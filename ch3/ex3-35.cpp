#include <iostream>

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    auto end = &nums[5];
    for (int *p = nums; p != end; ++p)
    {
        *p = 0;
    }

    for (auto i : nums)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";
}
