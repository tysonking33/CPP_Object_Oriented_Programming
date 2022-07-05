#include <iostream>

int *readNumbers()
{
    int *array = new int[10];

    for (int i = 0; i < 10 ; i++)
    {
        std::cin >> array[i];
    }
    return (array);
} 

bool equalsArray(int *numbers1,int *numbers2,int length){
    if (length < 1)
    {
        return (false);
    }
    bool outcome = false;
    for (int i = 0; i < length; i++)
    {
        if (numbers1[i] == numbers2[i])
        {
            outcome = true;
        }
        else
        {
            outcome = false;
            return (false);
        }
    }
    delete[] numbers1;
    delete[] numbers2;
    return (outcome);
}
