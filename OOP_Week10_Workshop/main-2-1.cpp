#include <iostream>
#include <math.h>

extern void print_as_binary(std::string decimal_number);

int main()
{
    std::string decimal_number = "1234567890";
    print_as_binary(decimal_number);
    return (0);
}