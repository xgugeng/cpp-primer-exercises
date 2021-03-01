#include <iostream>

int main()
{
    int i = 10, j = 20;
    int *p = &i;
    *p = 15;
    std::cout << "i = " << i << ", j = " << j << std::endl;

    p = &j;
    *p = 25;
    std::cout << "i = " << i << ", j = " << j << std::endl;
}
