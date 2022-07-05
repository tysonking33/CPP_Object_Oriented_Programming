#include <iostream>
#include <stdbool.h>

extern bool is_a_palindrome(int integers[], int length);
extern int sum_if_a_palindrome(int integers[], int length);
extern int sum_elements(int integers[], int length);

int main()
{
    int integers[3] = {1,2,1};
    int length = 3;
    std::cout << sum_elements(integers, length) << std::endl;
    return (0);
}