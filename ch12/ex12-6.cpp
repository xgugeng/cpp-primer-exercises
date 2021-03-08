#include <vector>
#include <iostream>

using std::vector;

auto getVector()
{
    return new vector<int>{};
}

auto visit(vector<int>* ptr)
{
    for (auto i: *ptr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

auto populate(vector<int>* ptr)
{
    int i;
    while (std::cin >> i)
    {
        ptr->push_back(i);
    }

    return ptr;
}

int main()
{
    auto ptr = populate(getVector());
    visit(ptr);
    delete ptr;
}
