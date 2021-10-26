#include <iostream>

class Base
{
public:
    Base()
    {
        std::cout << "Allocating memory for char array" << std::endl;
        arr = new char[16];
    }

    ~Base()
    {
        if (arr != nullptr)
        {
            std::cout << "Releasing memory for char array" << std::endl;
            delete arr;
        }
    }

private:
    char* arr;
};

class Derived : public Base
{
public:
    Derived()
    {
        std::cout << "Constructing Derived class ..." << std::endl;
    }
    ~Derived()
    {
        std::cout << "Destructing Derived class ..." << std::endl;
    }
};

int main()
{
    Derived d;
}