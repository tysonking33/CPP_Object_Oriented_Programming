#include <iostream>

extern int max_integer(int integers[], int length);
extern int min_integer(int integers[], int length);
extern int sum_min_and_max(int integers[], int length);

int main()
{
    int integers[6] = {2,3,5,1,7,4};
    int length = 6;
    std::cout << sum_min_and_max(integers, length) << std::endl;
    return (0);
}