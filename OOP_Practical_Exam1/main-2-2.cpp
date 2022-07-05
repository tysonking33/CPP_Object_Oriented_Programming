#include <iostream>
#include <math.h>

extern int binary_to_number(int binary_digits[], int number_of_digits);

int main()
{
    int binary_digits[4] = {1, 0, 1, 1};
    int number_of_digits = 4;

    std::cout << binary_to_number(binary_digits, number_of_digits) << std::endl;

    int binary_digits2[5] = {1, 1, 0, 1, 1};
    //27
    int number_of_digits2 = 5;

    std::cout << binary_to_number(binary_digits2, number_of_digits2) << std::endl;
    return (0);
}