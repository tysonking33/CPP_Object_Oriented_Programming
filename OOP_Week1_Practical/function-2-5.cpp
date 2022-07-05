#include <iostream>
//identify if the elements of array are organised in ascending order

bool descending(int array[], int n)
{
    bool outcome = false;
    int prev_element = array[0];
    if (n <= 0)
    {
        return (false);
    }
    for (int i = 1 ; i < n; i++)
    {
        if (prev_element > array[i])
        {
            outcome = true;
        }
        if (prev_element <= array[i])
        {
            return (false);
        }
        prev_element = array[i];
    }
    return(outcome);
}