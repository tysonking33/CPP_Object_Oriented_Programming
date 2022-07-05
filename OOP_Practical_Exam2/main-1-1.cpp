#include <iostream>

extern int *shift_left(int *vals, int len, int amount);

int main()
{
    int vals[] = {1,2,3,4,5};
    int len = 5;
    int amount = 2;
    int final_array[len];

    int *sv = shift_left(vals, len, amount);
    return (0);
}