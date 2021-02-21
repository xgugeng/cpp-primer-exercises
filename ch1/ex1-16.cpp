#include <iostream>

int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    
    int upper;
    if (v1 >= v2)
    {
        upper = v1;
    }
    else
    {
        upper = v2;
    }

    std::cout << "The upper number you entered is " << upper << std::endl;

    return 0;
}
