#include <iostream>

int identity(int array[10][10])
{
    //outcome = 1 means the matrix is currently an identity matrix
    int outcome = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((array[i][j] == 1) && (i == j))
            {
                outcome = 1;
            }
            else if ((array[i][j] == 0) && (i != j))
            {
                outcome = 1;
            }
            else
            {
                return (0);
            }
        }
    }
    return (outcome);
}