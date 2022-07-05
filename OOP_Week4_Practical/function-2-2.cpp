#include <iostream>

int maximum_sum(int *nums, int length)
{
    //length of array result
    if (length < 1)
    {
        return (0);
    }
    //if all numbers are negative
    int trigger = 0;
    for (int i = 0; i < length; i++)
    {
        if (*(nums + i) < 0)
        {
            trigger = 1;
        }
        else if (*(nums + i) >= 0)
        {
            trigger = 0;
        }

    }
    if (trigger == 1)
    {
        return (0);
    }
    
    //Finding the sub array with the largest sum
    //makinga postive or neegative array
    int *positive_or_negative = new int(length);
    //making a new sub array
    int *new_array = new int(length);

    //allocating each element with a 1 (positive), 0 (negative)
    for (int a = 0; a < length; a++)
    {
        if (*(nums + a) < 0)
        {
            *(positive_or_negative + a) = -1;
        }
        else if (*(nums + a) >= 0)
        {
            *(positive_or_negative + a) = 1;
        } 
    }

    //identifing the starting point of the sub-array

}