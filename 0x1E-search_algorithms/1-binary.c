#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or
 * -1 if array is NULL or value not present
 */
int binary_search(int *array, size_t size, int value)
{
int left, right, mid, i;
if (array == NULL)
return (-1);
left = 0;
right = size - 1;
while (left <= right)
{
printf("Searching in array: ");
for ( i = left; i <= right; i++)
{
printf("%d", array[i]);
if (i < right)
printf(", ");
}
printf("\n");
mid = left + (right - left) / 2;
if (array[mid] == value)
return (mid);
else if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}
return (-1);
}
