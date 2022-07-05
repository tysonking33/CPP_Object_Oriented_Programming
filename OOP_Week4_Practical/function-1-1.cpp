#include <iostream>

void copy_2d_strings(std::string first[][2], std::string second[][2], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            second[i][j] == first[i][j];
        }
    }

    /*testing
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < 1; b++)
        {
            std::cout << first[a][b] << " ";
        }
        std::cout << first[a][1] << " ";
    }*/
}
