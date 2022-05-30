#include <stdio.h>

#include "Lib.h"

float meanArray(int *array, unsigned int length)
{
    int sum = 0;

    for (unsigned int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return (float)(sum) / (float)(length);
}

float maxArray(int *array, unsigned int length)
{

    for (unsigned int i = 0; i < length; i++)
    {
        if (array[i + 1] > array[i])
        {

            continue;
        }
        else
        {
            return array[i];
            break;
        }
        return array[i];
    }
}

float minArray(int *array, unsigned int length)
{
    for (unsigned int i = 0; i < length; i++)
    {
        if (array[i + 1] < array[i])
        {

            continue;
        }
        else
        {
            return array[i];
            break;
        }
        return array[i];
    }
}
