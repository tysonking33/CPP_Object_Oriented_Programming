#include <iostream>
//summing the elements in the 2 arrays
int sumtwo(int array[], int secondarray[], int n)
{
    int outcome = 0;
    if (n < 1)
    {
        return (0);
    }
    for (int i = 0; i < n; i++)
    {
        outcome = outcome + array[i] + secondarray[i];
    }
    return (outcome);
}