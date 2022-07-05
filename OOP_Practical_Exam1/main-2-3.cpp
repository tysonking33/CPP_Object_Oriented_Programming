#include <iostream>
#include <math.h>

extern int sum_elements(int integers[], int length);
extern bool is_a_palindrome(int integers[], int length);
extern int sum_if_a_palindrome(int integers[], int length);

int main()
{
    int integers[] ={};
    int length = 0;
    std::cout << sum_elements(integers, length);
    
    return (0);
}