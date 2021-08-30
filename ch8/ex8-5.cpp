#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
    std::string ifile{"ex8-2.cpp"};
    std::ifstream in(ifile);
    std::string word;
    std::vector<std::string> contents;

    while (in >> word)
    {
        contents.push_back(word);
    }

    for (auto &ele : contents)
    {
        std::cout << ele << std::endl;
    }
}
