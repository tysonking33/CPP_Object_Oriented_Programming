#include <iostream>
#include <math.h>

int binary_to_number(int binary_digits[], int number_of_digits)
{
    int sum  = 0;

    for (int i = 0; i < number_of_digits; i++)
    {
        if (binary_digits[i] == 1)
        {
            sum = sum + pow(2, number_of_digits - (i + 1));
        }
        else if (binary_digits[i] == 0)
        {
            sum = sum;
        }
    }
    return (sum);
}