#include <iostream>
//the function returns the sum of all elements in the int arra
//if the size parameter is less than 1, return 0

int sum_array(int array[], int n)
{
    int outcome;

    outcome = 0;
    if (n < 1)
    {
        return (0);
    }

    for (int i = 0; i < n; i++)
    {
        outcome = outcome + array[i];
    }
    return (outcome);
}