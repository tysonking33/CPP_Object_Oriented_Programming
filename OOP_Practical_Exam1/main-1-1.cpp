#include <iostream>

extern void printer(int array[10][10]);

int main()
{
    int array[10][10] = {{0,1,2,3,4,5,6,7,8,9}, {0,1,2,3,4,5,6,7,8,9}, {0,1,2,3,4,5,6,7,8,9},
        {0,1,2,3,4,5,6,7,8,9}, {0,1,2,3,4,5,6,7,8,9}, {0,1,2,3,4,5,6,7,8,9},
        {0,1,2,3,4,5,6,7,8,9}, {0,1,2,3,4,5,6,7,8,9}, {0,1,2,3,4,5,6,7,8,9},
        {0,1,2,3,4,5,6,7,8,9}};

    printer(array);
    return (0);
}