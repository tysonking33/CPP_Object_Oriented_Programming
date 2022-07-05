#include <iostream>
#include <math.h>

//checking if palindrome
bool is_a_palindrome(int integers[], int length)
{
    //palindrome = 0, not palindrome
    bool palindrome = 0;
    for (int i = 0; i < length; i++)
    {
        if (integers[i] == integers[length - (i + 1)])
        {
            palindrome = 1;
        }
        else if (integers[i] != integers[length - (i + 1)])
        {
            palindrome = 0;
            return (palindrome);
        }
    }
    return (palindrome);
}

//sum if palindrome
int sum_if_a_palindrome(int integers[], int length)
{
    int sum = 0;
    for (int j = 0; j < length; j++)
    {
        sum = sum + integers[j];
    }
    return (sum);
}

//returning value
int sum_elements(int integers[], int length)
{
    int outcome = 0;
    if (length <= 0)
    {
        return (-1);
    }
    if (is_a_palindrome(integers, length) == 0)
    {
        return (-2);
    }
    if (is_a_palindrome(integers, length) == 1)
    {
        outcome = sum_if_a_palindrome(integers, length);
    }
    return (outcome);
}