#include <iostream>
// return the number of 2s, 5s and 9s
void twofivenine(int array[], int n)
{
    int number = 0;
    int num_twos = 0;
    int num_fives = 0;
    int num_nines = 0;
    for (int i = 0; i < n; i++)
    {
        number = array[i];
        switch (number)
        {
            case 2:
                num_twos++;
                break;
            case 5:
                num_fives++;
                break;
            case 9:
                num_nines++;
                break;
            default :
                break;
        }
    }
    std::cout << "2:" << num_twos << ",5:" << num_fives << ",9:" << num_nines << "\n" << std::endl;
}