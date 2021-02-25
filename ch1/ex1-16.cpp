#include <iostream>

int main()
{
    int num, total;
    while (std::cin >> num)
    {
        total += num;
    }
    std::cout << "The sum of the number entered is " << total << std::endl;

}
