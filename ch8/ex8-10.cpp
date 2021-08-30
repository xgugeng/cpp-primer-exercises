#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

int main()
{
    std::vector<std::string> contents;
    std::string fileName = "ex8-7.cpp";
    std::ifstream ifs(fileName);
    std::string line;

    while (getline(ifs, line))
    {
        contents.push_back(line);
    }

    for (auto& ele : contents)
    {
        std::istringstream record(ele);
        std::string word;
        while (record >> word)
        {
            std::cout << word << std::endl;
        }
    }
}
