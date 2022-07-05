#include <iostream>
//identify median of the array

int median(int array[], int n)
{
    //odd=0, even=1
    int odd_or_even = 0;
    int previous_value = array[0];
    int temp_value = previous_value;
    int median_idx = 0;
    int median = 0;
    if (n < 1)
    {
        return (0);
    }
    //determining odd or even;
    if (n % 2 == 0)
    {
        odd_or_even = 1;
    }
    else if (n % 2 != 0)
    {
        odd_or_even = 0;
    }
    //sorting the array into ascending order
    for (int i = 0; i < n; i++)
    {
        if (previous_value > array[i])
        {
            temp_value = previous_value;
            previous_value = array[i];
            array[i] = temp_value;
        }
    }
    //determining median
    if (odd_or_even == 1)
    {
        return(0);
    }
    else if (odd_or_even == 0)
    {
        median_idx = n/2;
        median = array[median_idx];
    }
    return (median);
}