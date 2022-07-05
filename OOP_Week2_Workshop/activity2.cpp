#include <iostream>
#include <math.h>

int main()
{
    int dividend = 13;

    int array[32];
    int counter = 0;
    
    while (dividend != 0)
    {
        if (dividend % 8 == 0)
        {
            dividend = std::floor(dividend / 8);
            array[counter] = dividend % 8;
            counter++;
        }
        else
        {
            dividend = std::floor(dividend / 8);
            array[counter] = dividend % 8;
            counter++;
        }
    }
    for (int i = counter - 1; i >= 0; i--)
    {
        std::cout << array[i];
    }
}