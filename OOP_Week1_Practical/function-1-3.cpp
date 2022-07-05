#include <iostream>
//return the number of elements in an array equal to a given parameter

int count(int array[], int n, int number)
{
    int outcome = 0;
    if (n < 1)
    {
        return (0);
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] == number)
        {
            outcome++;
        }
    }
    return (outcome);
}