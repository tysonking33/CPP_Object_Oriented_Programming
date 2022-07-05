#include <iostream>
#include <math.h>

int binary_to_number(int binary_digits[], int number_of_digits)
{
    int integer_value = 0;
    for (int i = 0; i < number_of_digits; i++)
    {
        if (binary_digits[i] == 0)
        {
            integer_value = integer_value;
        }
        if (binary_digits[i] == 1)
        {
            integer_value = integer_value + pow(2,(number_of_digits - (i + 1)));
        }
    }
    return (integer_value);
}