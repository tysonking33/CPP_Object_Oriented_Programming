#include <iostream>

extern void cpyda(double *old_array, double *new_array, int length);

int main()
{
    double old_array[4] = {1,2,3,4};
    double new_array[4];
    int length = 4;

    cpyda(old_array, new_array, length);
    return (0);
}