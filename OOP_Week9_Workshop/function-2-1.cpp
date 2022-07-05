#include <iostream>
#include <math.h>

void print_as_binary(std::string decimal_number)
{
    int binary_string[32] = {};
    int counter = 0;
    int integer = stoi(decimal_number);
    std::cout << integer << std::endl;
    //converting the decimal number into a binary number
    while (integer != 0)
    {
        if (integer % 2 == 0)
        {
            integer = std::floor(integer / 2);
            binary_string[counter] = 0;
            counter++;
        }
        else
        {
            integer = std::floor(integer / 2);
            binary_string[counter] = 1;
            counter++;
        }
    }

    //printing the binary number
    for (int i = counter - 1; i >= 0; i--)
    {
        std::cout << binary_string[i];
    }  
}