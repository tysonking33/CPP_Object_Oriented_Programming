#include <iostream>

void cpyda(double *old_array, double *new_array, int length)
{
    for (int i = 0; i < length; i++)
    {
        *(new_array + i) = *(old_array + i);
    }

    /*testing
    for (int i = 0; i < length; i ++)
    {
        std::cout << new_array[i];
    }*/
}