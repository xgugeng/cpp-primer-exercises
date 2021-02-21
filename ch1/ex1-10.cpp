#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 50; i <= 100; ++i)
    {
        sum += i;
    }
    std::cout << "Sum using for-loop is " << sum << std::endl;

    sum = 0;
    int j = 50;
    while (j <= 100)
    {
        sum += j;
        ++j;
    }
    std::cout << "Sum using while-loop is " << sum << std::endl;

    return 0;
}
