#include <iostream>

extern int count_numbers_in_range(int vals[], int length, int bottom, int top);

int main()
{
    {
        int vals[] = {1,7,3,4,6,5,2};
        int res = count_numbers_in_range(vals,7,3,6);
        std::cout << res << std::endl;
    }
    {
        int vals[] = {2,4,6,8,10};
        int res = count_numbers_in_range(vals,5,4,12);
        std::cout << res << std::endl;
    }
    return (0);
}