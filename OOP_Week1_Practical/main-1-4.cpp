#include <iostream>

extern int sumtwo(int array[], int secondarray[], int n);

int main(void)
{
    int array[5] = {1, 2, 3, 4, 5};
    int secondarray[5] = {6, 7, 8, 9, 10};
    int n = 5;
    std::cout << sumtwo(array, secondarray, n) << std::endl;
    return (0);
}
