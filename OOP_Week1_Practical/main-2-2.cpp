#include <iostream>

extern int maximum(int array[], int n);

int main()
{
    int array[5] = {-12, 3, 1, 3, 2};
    int n = 5;
    std::cout << maximum(array, 5) << std::endl;
    return (0);
}