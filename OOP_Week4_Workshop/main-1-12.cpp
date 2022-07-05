#include <iostream>

extern int size_of_variable_star_arr(int *arr);

int main()
{
    int *arr = new int[3];
    std::cout << size_of_variable_star_arr(arr) << std::endl;
    return (0);
}