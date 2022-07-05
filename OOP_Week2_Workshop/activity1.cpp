#include <iostream>
#include <math.h>


int main()
{
    int dividend = 13;

    int array[32];
    int counter = 0;
    
    while (dividend != 0)
    {
        if (dividend % 2 == 0)
        {
            dividend = std::floor(dividend / 2);
            array[counter] = 0;
            counter++;
        }
        else
        {
            dividend = std::floor(dividend / 2);
            array[counter] = 1;
            counter++;
        }
    }
    for (int i = counter -1; i >= 0; i--)
    {
        std::cout << array[i];
    }
}