#include <iostream>

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype(a = b) d = a;
    std::cout << "a = " << a << ", b = " << b
        << ", c = " << c << ", d = " << d << std::endl;
}
