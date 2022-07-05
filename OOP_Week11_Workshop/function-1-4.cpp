#include <iostream>

void print_scaled_matrix(int array[3][3], int scale)
{
    int scaled_matrix[3][3];
    //multiplying the matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scaled_matrix[i][j] = array[i][j] * scale; 
        }
    }
    
    //printing out the scaled matrix
    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 2; b++)
        {
            std::cout << scaled_matrix[a][b] << " ";
        }
        std::cout << scaled_matrix[a][2] << std::endl;
    }
}