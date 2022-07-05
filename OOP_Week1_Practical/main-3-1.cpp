#include <iostream>

extern bool fanarray(int array[], int n);

int main()
{
    int array[6] = {1,2,3,3,2,1};
    int n = 6;
    std::cout << fanarray(array, n) << std::endl;
    return (0);
}