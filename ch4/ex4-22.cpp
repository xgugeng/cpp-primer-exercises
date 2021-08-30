#include <iostream>

int main()
{
    for (unsigned g; std::cin >> g; )
    {
        // conditional operators
        auto result = g > 90 ? "high pass" : g < 60 ? "fail" : g < 75 ? "low pass" : "pass";
        std::cout << result << std::endl;

        // if statements
        if (g > 90)
        {
            std::cout << "high pass";
        }
        else if (g < 60)
        {
            std::cout << "fail";
        }
        else if (g < 75)
        {
            std::cout << "low pass";
        }
        else
        {
            std::cout << "pass";
        }
        std::cout << std::endl;
    }

    return 0;
}
