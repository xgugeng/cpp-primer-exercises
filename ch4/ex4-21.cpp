#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7};

    for (auto &i : vec)
    {
        std::cout << ((i & 0x1) ? i * 2 : i) << " ";
    }
    std::cout << std::endl;
}
