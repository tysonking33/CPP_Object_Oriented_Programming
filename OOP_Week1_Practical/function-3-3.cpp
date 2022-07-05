#include <iostream>
//find the weighted average

double weightedaverage(int array[], int n)
{
    int occured_number = 0;
    int element = 0;
    int occurances[n];
    double weighted_average = 0;

    if (n < 1)
    {
        return (0);
    }
    
    //counting the number of times an element has occured and storing it in an array called occurances
    for (int i = 0; i < n; i++)
    {
        //reseting the counter for each element
        occured_number = 0;
        element = array[i];
        for (int j = 0; j < n; j++)
        {
            if (element == array[j])
            {
                occured_number++;
            }
        }
        occurances[i] = occured_number;
    }

    //calculating weighted average
    for (int k = 0; k < n; k++)
    {
        weighted_average = weighted_average * (occurances[k] / n);
        weighted_average = weighted_average + array[k];
    }
    return (weighted_average);

}