#include <iostream>
#include <string>

using std::istream;

istream& getStream(istream& is)
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
    auto& is = getStream(std::cin);
    std::cout << is.rdstate() << std::endl;
}
