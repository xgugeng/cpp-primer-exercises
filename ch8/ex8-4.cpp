#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
    std::string ifile{"ex8-2.cpp"};
    std::ifstream in(ifile);
    std::string line;
    std::vector<std::string> contents;

    while (std::getline(in, line))
    {
        contents.push_back(line);
    }

    for (auto &ele : contents)
    {
        std::cout << ele << std::endl;
    }
}
