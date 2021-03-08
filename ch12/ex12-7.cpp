#include <vector>
#include <iostream>
#include <memory>

using std::vector;
using std::shared_ptr;
using std::make_shared;

auto getVector()
{
    return make_shared<vector<int>>();
}

auto visit(shared_ptr<vector<int>> ptr)
{
    for (auto i: *ptr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

auto populate(shared_ptr<vector<int>> ptr)
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
}
