#include <iostream>

double sumeven(double array[], int n)
{
    double sum = 0;
    if (n < 1)
    {
        return (0);
    }
    for (int i = 0; i < n; i = i+2)
    {
        sum = sum + array[i];
    }
    return (sum);
}