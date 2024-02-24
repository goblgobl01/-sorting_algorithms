#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    int i, memory,chahid = 1;

    while(chahid = 1)
    {
        chahid = 0;
        for(i = 0; i < size - 1; i++)
        {
            if(array[i] > array[i + 1])
            {
                memory = array[i + 1];
                array[i + 1] = array[i];
                array[i] = memory;
                print_array(array, size);
                chahid = 1;
            }
        }
        if (chahid == 0)
            break;
    }

}