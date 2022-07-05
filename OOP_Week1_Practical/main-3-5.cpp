#include <iostream>

extern double sumeven(double array[], int n);

int main()
{
    double array[5] = {1,2,3,4,5};
    int n = 5;
    std::cout << sumeven(array,n) << std::endl;
    return (0);
}