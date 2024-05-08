#include "search_algos.h"
#include <stdio.h>
#include <math.h>
/**
 * interpolation_search - function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or
 * -1 if array is NULL or value not present
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t low, high, pos;
if (array == NULL)
return -1;
low = 0;
high = size - 1;
while (low <= high && value >= array[low] && value <= array[high])
{
pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
if (array[pos] == value)
return pos;
if (array[pos] < value)
low = pos + 1;
else
high = pos - 1;
}
printf("Value checked array[%lu] is out of range\n", low);
return (-1);
}
