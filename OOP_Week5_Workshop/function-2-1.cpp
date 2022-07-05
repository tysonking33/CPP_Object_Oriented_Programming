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


void hexDigits(int *numbers,int length)
{
    for (int a = 0; a < length; a++)
    {
        int cum = a + 1;
        std::cout << cum << " " << numbers[a] << " ";
        switch (numbers[a]){
            case (10):
                std::cout << "A" << std::endl;
                break;
            case (11):
                std::cout << "B" << std::endl;
                break;
            case (12):
                std::cout << "C" << std::endl;
                break;
            case (13):
                std::cout << "D" << std::endl;
                break;
            case (14):
                std::cout << "E" << std::endl;
                break;
            case (15):
                std::cout << "F" << std::endl;
                break;
            default:
                std::cout << *(numbers + a) << std::endl;
                break;
        }
    }
    delete[] numbers;
}