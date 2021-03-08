#include "ex12-2.h"
#include <iostream>

int main()
{
    const StrBlob csb{ "hello", "world"};
    std::cout << csb.size() << " " << csb.front() << " " << csb.back() << std::endl;

    StrBlob sb = csb;
    sb.push_back("gugeng");
    std::cout << sb.size() << " " << sb.front() << " " << sb.back() << std::endl;
}
