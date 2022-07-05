#include <iostream>

extern void copy_2d_strings(std::string[][2], std::string second[][2], int n);

int main()
{
    std::string first[3][2] = {"pooopy"};
    std::string second[3][2];

    int n = 3;
    copy_2d_strings(first, second, n);
    return (0);
}