#include <iostream>

extern void print_sevens(int *nums, int length);

int main()
{
    int nums[4] = {21, 23 ,28, 30};
    int length = 4;

    print_sevens(nums, length);
    return (0);
}