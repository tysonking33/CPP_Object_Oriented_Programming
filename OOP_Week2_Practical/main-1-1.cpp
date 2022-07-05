#include <iostream>
#include <cmath>

extern int diagonal(int array[4][4]);

int main()
{
    int array[4][4] = {0,0,0,0};
    std::cout << diagonal(array) << std::endl;
    return (0);
}