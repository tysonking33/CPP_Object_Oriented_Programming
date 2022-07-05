#include <iostream>

extern int median(int array[], int n);

int main()
{
    int array[0] = {};
    int n = 0;
    std::cout << median(array, n) << std::endl;
    return (0);
}