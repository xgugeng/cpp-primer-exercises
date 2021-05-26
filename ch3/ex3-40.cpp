#include <iostream>
#include <cstring>

int main()
{
    const char cs1[] = "foo";
    const char cs2[] = "bar";

    const size_t new_size = strlen(cs1) + strlen(cs2) + 2;
    char cs3[new_size];

    strcpy(cs3, cs1);
    strcat(cs3, " ");
    strcat(cs3, cs2);

    std::cout << cs3 << std::endl;
}
