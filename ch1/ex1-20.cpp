#include <iostream>

int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;

    int sum = 0;
    for (int val = v1; val <= v2; ++val)
    {
        sum += val;
    }
    std::cout << "Sum of " << v1 << " to " << v2
              << " inclusive is " << sum << std::endl;

    return 0;
}

