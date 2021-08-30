#include <iostream>
#include <sstream>
#include <string>

std::istream& getStream(std::istream& is)
{
    std::string str;
    while (is >> str)
    {
        std::cout << str << std::endl;
    }

    is.clear();
    return is;
}

int main()
{
    std::istringstream ss("Hello World!");
    getStream(ss);
}
