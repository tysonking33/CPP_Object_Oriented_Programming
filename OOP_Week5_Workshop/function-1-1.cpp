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

void printNumbers(int *numbers,int length)
{
    for (int j = 0; j < length; j++)
    {
        int cum = j + 1;
        std::cout << cum << " " << numbers[j] << " " << std::endl;
    }
    delete[] numbers;
}