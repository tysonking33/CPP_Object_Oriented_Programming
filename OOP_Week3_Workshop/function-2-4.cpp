#include <iostream>

//determining max integer
int max_integer(int integers[], int length)
{
    int max = integers[0];
    for (int i = 1; i < length; i++)
    {
        if (integers[i] > max)
        {
            max = integers[i];
        }
        else
        {
            max = max;
        }
    }
    return (max);
}

//determining min integer
int min_integer(int integers[], int length)
{
    int min = integers[0];
    for (int i = 1; i < length; i++)
    {
        if (integers[i] < min)
        {
            min = integers[i];
        }
        else
        {
            min = min;
        }
    }
    return (min);
}

//determining the sum of the max and min integers
int sum_min_and_max(int integers[], int length)
{
    int sum_of_min_and_max = 0;
    if (length <= 0)
    {
        return (-1);
    }
    else
    {
        sum_of_min_and_max = min_integer(integers, length) + max_integer(integers, length);
    }
    return (sum_of_min_and_max);
}
