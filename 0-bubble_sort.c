#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 **/
void bubble_sort(int *array, size_t size)
{
size_t i;
int temp, swapped = 1;

while (swapped == 1)
{
swapped = 0;
for (i = 0; i < size - 1; i++)
{
if (array[i] > array[i + 1])
{
temp = array[i + 1];
array[i + 1] = array[i];
array[i] = temp;
print_array(array, size);
swapped = 1;
}
}
if (swapped == 0)
break;
}
}
