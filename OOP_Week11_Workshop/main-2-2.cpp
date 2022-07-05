#include <iostream>
#include <math.h>

extern int binary_to_number(int binary_digits[], int number_of_digits);

int main()
{
    int binary_digits[6] = {1, 0, 1, 1, 0, 1};
    int number_of_digits = 6;
    std::cout << binary_to_number(binary_digits, number_of_digits) << std::endl;
    return (0);
}