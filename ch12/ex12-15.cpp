#include <iostream>

int main()
{
    constexpr double i = 0.3;
    const double j = 0.1 + 0.1 + 0.1;
    if (i == j)
    {
        std::cout << i << " is equal to "  << j << std::endl;
    }
    else
    {
        std::cout << i << " is NOT equal to "  << j << std::endl;
    }
}
