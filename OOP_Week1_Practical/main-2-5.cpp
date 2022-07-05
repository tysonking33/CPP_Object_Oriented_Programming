#include <iostream>

extern bool descending(int array[], int n);

int main()
{
    int array[5] = {1, 2, 2, 4, 5};
    int n = 5;
    std::cout << descending(array, n) << std::endl;
    return (0);
}