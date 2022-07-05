#include <iostream>

extern double weightedaverage(int array[], int n);

int main()
{
    int array[6] = {1,2,1,4,1,3};
    int n = 6;
    std::cout << weightedaverage(array, n) << std::endl;
    return (0);
}