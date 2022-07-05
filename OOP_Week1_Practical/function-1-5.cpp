#include <iostream>
//return the number of even numbers between 1 and number

int count_even(int number)
{
    int even_count = 0;
    if (number < 1)
    {
        return (0);
    }
    for (int i = 1; i < number; i++)
    {
        if (i % 2 == 0)
        {
            even_count++;
        }
    }
    return (even_count);
}
