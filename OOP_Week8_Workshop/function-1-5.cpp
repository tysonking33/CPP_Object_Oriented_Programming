#include <iostream>

void print_summed_matrices(int array1[3][3], int array2[3][3])
{
    int summed_matrix[3][3];
    //calculating the sum of the matrices
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            summed_matrix[i][j] = array1[i][j] + array2[i][j];
        }
    }

    //printing the sum of the matrices
    for (int a = 0; a <  3; a++)
    {
        for (int b = 0; b < 2; b++)
        {
            std::cout << summed_matrix[a][b] << " ";
        }
        std::cout << summed_matrix[a][2] << std::endl;
    }
}