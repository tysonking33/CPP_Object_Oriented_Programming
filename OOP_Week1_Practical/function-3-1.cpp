#include <iostream>
//determine if the array is a palindrome

bool fanarray(int array[], int n)
{
    int side_limit = 0;
    bool odd = false;
    int i = n - 1;
    bool palindrome = false;
    if (n < 1)
    {
        return(0);
    }
    //determining if n is odd or even, true = even
    if (n % 2 == 0)
    {
        odd = false;
    }
    else if (n % 2 != 0)
    {
        odd = true;
    }
    //determining the limit of comparision
    if (odd == false)
    {
        side_limit = n/2;
    }
    else if (odd == true)
    {
        side_limit = n-1;
        side_limit = side_limit/2;
    }

    //testing for palindrome
    for (int j = 0; j < side_limit; j++)
    {
        if(array[j] == array[i])
        {
            palindrome = true;
            i--;
        }
        else
        {
            palindrome = false;
            return (palindrome);
        }
    }
    return (palindrome);
}