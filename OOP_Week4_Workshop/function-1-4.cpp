#include <iostream>

int size_of_variable_star_arr(int *arr)
{
    int num = sizeof(&arr);

    return (num);
}