#include <iostream>

extern int count(int array[], int n, int number);

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int number = 3;
    std::cout << count(array, n, number) << std::endl;
    return (0);
}