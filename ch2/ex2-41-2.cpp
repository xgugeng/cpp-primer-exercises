#include <iostream>

// Rewrite 1.5.2

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    std::string isbn() const { return bookNo; }
};

int main()
{
    Sales_data book1, book2;
    double price1, price2;
    std::cin >> book1.bookNo >> book1.units_sold >> price1
        >> book2.bookNo >> book2.units_sold >> price2;

    book1.revenue = book1.units_sold * price1;
    book2.revenue = book2.units_sold * price2;

    if (book1.isbn() == book2.isbn())
    {
        auto totalUnits = book1.units_sold + book2.units_sold;
        auto totalRevenue = book1.revenue + book2.revenue;
        std::cout << book1.isbn() << " " << totalUnits << " "
                << totalRevenue << " ";
        if (totalUnits != 0)
        {
            std::cout << totalRevenue / totalUnits << std::endl;
        }
        else
        {
            std::cout << "(no sales)" << std::endl;
        }

        return 0;
    }
    else
    {
        std::cerr << "Data must refer to same ISBN"
                  << std::endl;
        return -1;
    }
}
