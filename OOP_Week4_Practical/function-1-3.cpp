#include <iostream>

void cpyia(int old_array[], int new_array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        *(new_array + i) = *(old_array + i);
    }
    
    /*testing
    for (int a = 0; a < length; a++)
    {
        std::cout << new_array[a] << " ";
    }*/
}