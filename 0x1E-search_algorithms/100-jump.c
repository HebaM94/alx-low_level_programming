#include "search_algos.h"
#include <stdio.h>
#include <math.h>
/**
 * jump_search - function that searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or
 * -1 if array is NULL or value not present
 */
int jump_search(int *array, size_t size, int value)
{
int jump, sqroot, k, prev;
if (array == NULL)
return (-1);
sqroot = (int)sqrt((double)size);
k = 0;
prev = jump = 0;
do {
printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
if (array[jump] == value)
return (jump);
k++;
prev = jump;
jump = k * sqroot;
} while (jump < (int)size && array[jump] < value);
printf("Value found between indexes [%d] and [%d]\n", prev, jump);
for (; prev <= jump && prev < (int)size; prev++)
{
printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
if (array[prev] == value)
return (prev);
}
return (-1);
}
