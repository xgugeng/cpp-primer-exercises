#include <memory>
#include <iostream>

using std::shared_ptr;

void process(shared_ptr<int> ptr)
{
    std::cout << ptr.use_count() << std::endl;
}

int main()
{
    shared_ptr<int> p(new int(42));
    process(shared_ptr<int>(p.get()));
}
