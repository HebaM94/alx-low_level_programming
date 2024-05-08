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
size_t jump, prev, sqroot, i;
if (array == NULL)
return (-1);
sqroot = (size_t) sqrt(size);
prev = jump = 0;
while (array[jump] < value && jump < size)
{
printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
prev = jump;
jump += sqroot;
}
printf("Value found between indexes [%lu] and [%lu]\n", prev, jump);
for (i = prev; i <= ((jump < size - 1) ? jump : size - 1); i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
