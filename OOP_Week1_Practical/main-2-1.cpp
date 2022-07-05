#include <iostream>

extern int minimum(int array[], int n);

int main()
{
    int array[5] = {-12, 3, 4, -5, 8};
    int n = 5;
    std::cout << minimum(array, n) << std::endl;
    return (0);
}