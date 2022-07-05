#include <iostream>
#include <string>

void printer(int array[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << array[i][9] << std::endl;
    }
}