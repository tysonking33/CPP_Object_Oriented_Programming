#include <iostream>

int *shift_left(int *vals, int len, int amount)
{
    int *array = new int[len];
    int array_ctr = 0;
    if (amount <= len)
    {
        for (int i = amount; i < len; i++)
        {
            *(array + array_ctr) = *(vals + i);
            array_ctr++;
        }
    }
    //int difference = len - array_ctr;
    for (array_ctr; array_ctr < len; array_ctr++)
    {
        *(array + array_ctr) = {0};
    }

    /*testing
    for (int a = 0; a < len; a++)
    {
        std::cout << array[a] << " ";
    }
    */
    return (array);
}