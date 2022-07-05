#include <iostream>

extern int size_of_array_arr(int *arr);
int main()
{
    int *arr = new int[3];
    std::cout << size_of_array_arr(arr) << std::endl;
    return (0);
}