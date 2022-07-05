#include <iostream>

extern int average(int array[], int n);

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    std::cout << average(array, 5) << std::endl;
    return (0);
}