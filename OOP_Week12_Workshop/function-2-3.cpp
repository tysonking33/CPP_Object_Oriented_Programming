#include <iostream>
#include <math.h>

//checking if the array is a palindrome
bool is_a_palindrome(int integers[], int length)
{
    //palindrome = 1 if true
    bool palindrome = 0;
    int counter = 0;
    if (length <= 0)
    {
        return (-1);
    }
    for (int i = 0; i < length; i++)
    {
        if (integers[i] == integers[(length - (1 + i))])
        {
            palindrome = 1;
        }
        else
        {
            palindrome = 0;
            return (0);
        }
    }
    return (palindrome);
}

int sum_if_a_palindrome(int integers[], int length)
{
    int sum = 0;
    int counter1 = 0;
    for (int j = 0; j < length; j++)
    {
        sum = sum + integers[j];
    }
    return (sum);
}

int sum_elements(int integers[], int length)
{
    int sum_elements = 0;
    if (length <= 0)
    {
        return (-1);
    }
    if (is_a_palindrome(integers, length) != 1)
    {
        return (-2);
    }
    if (is_a_palindrome(integers, length) == 1)
    {
        sum_elements = sum_if_a_palindrome(integers, length);
    }
    return (sum_elements);
}