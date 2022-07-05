#include <iostream>

int size_of_variable_star_t()
{
    int a, *p;
    p = &a;

    //sizeof(p) is the size of p, integer (4 bytes)
    return (sizeof(p));
}