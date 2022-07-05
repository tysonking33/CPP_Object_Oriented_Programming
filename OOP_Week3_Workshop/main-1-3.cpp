#include <iostream>

extern void counter_numbers(int array[4][4]);

int main()
{
    int array[4][4] = {{10,2,3,4}, {5,6,7,8}, {9,0,1,2}, {3,4,5,6}};
    counter_numbers(array);
    return (0);
}