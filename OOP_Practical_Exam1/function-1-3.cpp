#include <iostream>

void counter_numbers(int array[4][4])
{
    int zero_counter = 0;
    int one_counter = 0;
    int two_counter = 0;
    int three_counter = 0;
    int four_counter = 0;
    int five_counter = 0;
    int six_counter = 0;
    int seven_counter = 0;
    int eight_counter = 0;
    int nine_counter = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (array[i][j] == 0)
            {
                zero_counter++;
            }
            else if (array[i][j] == 1)
            {
                one_counter++;
            }
            else if (array[i][j] == 2)
            {
                two_counter++;
            }
            else if (array[i][j] == 3)
            {
                three_counter++;
            }
            else if (array[i][j] == 4)
            {
                four_counter++;
            }
            else if (array[i][j] == 5)
            {
                five_counter++;
            }
            else if (array[i][j] == 6)
            {
                six_counter++;
            }
            else if (array[i][j] == 7)
            {
                seven_counter++;
            }
            else if (array[i][j] == 8)
            {
                eight_counter++;
            }
            else if (array[i][j] == 9)
            {
                nine_counter++;
            }
        }
    }
    std::cout << zero_counter << ":number of zeros;" << one_counter << ":number of ones;" << two_counter << ":number of twos"
    << three_counter << ":number of threes;" << four_counter << ":number of fours;" << five_counter << ":number of fives;"
    << six_counter << ":number of sixes;" << seven_counter << ":number of sevens;" << eight_counter << ":number of eights;"
    << nine_counter << ":number of nines;" << std::endl;
}